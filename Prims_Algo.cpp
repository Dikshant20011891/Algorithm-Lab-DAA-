#include<bits/stdc++.h>
using namespace std;

int minWeightVertex(int weight[],bool isIncluded[],int n)
{
    int mini = INT_MAX,idx;

    for(int i=0;i<n;i++)
    {
        if(isIncluded[i] == false && weight[i] < mini)
        {
            mini = weight[i];
            idx = i;
        }
    }

    return idx;
}

int main()
{
    int n,e;
    cout<<"Enter the vertices and edges : ";
    cin>>n>>e;

    vector<pair<int,int>> adj[n];

    for(int i=0;i<e;i++)
    {
        int u,v,wt;
        cout<<"Edge and weight : ";
        cin>>u>>v>>wt;

        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }

    int weight[n],parent[n];
    bool isIncluded[n] = {false};

    // Initializing
    for(int i=1;i<n;i++)
    {
        weight[i] = INT_MAX;
        parent[i] = -1;
    }
    weight[0] = 0;

    for(int i=0 ; i<n-1 ; i++)
    {
        int u = minWeightVertex(weight,isIncluded,n);
        // cout<<u;

        isIncluded[u] = true;

        for(auto it : adj[u])
        {
            int v = it.first;
            int wt = it.second;

            if(isIncluded[v] == false && wt < weight[v])
            {
                weight[v] = wt;
                parent[v] = u;
            }
        }
    }

    for(int i=1;i<n;i++)
    {
        cout<<parent[i]<<"---"<<i<<endl;
    }
}