#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int find(int k,int parent[])
{
    if(k == parent[k])
    {
        return parent[k];
    }
    return parent[k] = find(parent[k],parent);
}

void union_set(int x,int y,int rank[],int parent[])
{
    if(rank[x] > rank[y])
    {
        parent[y] = x;
    }
    else
    {
        parent[x] = y;
    }

    if(rank[x] == rank[y])
    {
        rank[y]++;
    }
}

int main()
{
    int n,e;
    cout<<"Number of vertices and edges : ";
    cin>>n>>e;

    int u,v,wt,t_wt = 0;
    vector<pair<int,pair<int,int>>> vec;
    int parent[n],rank[n];

    for(int i=0;i<n;i++)
    {
        rank[i] = 0;
        parent[i] = i;
    }

    for(int i=0;i<e;i++)
    {
        cout<<"Enter edge and weight : ";
        cin>>u>>v>>wt;
        vec.push_back({wt,{u,v}});
    }

    sort(vec.begin(),vec.end());

    for(int i=0;i<vec.size();i++)
    {
        u = vec[i].second.first;
        v = vec[i].second.second;

        int x = find(u,parent);
        int y = find(v,parent);

        if(x != y)
        {

            // Edge must be added in MST
            cout<<u<<"-"<<v<<endl;

            t_wt += vec[i].first;

            union_set(x,y,rank,parent);
        }
    }
}