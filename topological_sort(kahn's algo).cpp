#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>>&vec,int x,int y)
{
    vec[x].push_back(y);
}

void topo_sort(vector<vector<int>> vec, int indegree[],int v, int e)
{
    queue<int> que;
    for(int i=0;i<v;i++)
    {
        if(indegree[i] == 0)
        {
            que.push(i);
            indegree[i] = -1;
        }
    }
    cout<<"Sequence : ";
    while(!que.empty())
    {
        int x;
        x = que.front();
        for(int i=0;i<vec[x].size();i++)
        {
            indegree[vec[x][i]]--;
            if(indegree[vec[x][i]] == 0)
            {
                que.push(vec[x][i]);
            }
        }
        cout<<x<<" ";
        que.pop();
    }
}

int main()
{
    int v,e;
    cout<<"Enter the vertex : ";
    cin>>v;
    cout<<"Enter the Edges : ";
    cin>>e;
    vector<vector<int>> vec(v);
    int indegree[v] = {0};
    for(int i=0;i<e;i++)
    {
        int x,y;
        cout<<"Enter the Edge : ";
        cin>>x>>y;
        indegree[y]++;
        addEdge(vec,x,y);
    }
    topo_sort(vec,indegree,v, e);
}
