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
        }
        cout<<x<<" ";
        que.pop();
        for(int i=0;i<v;i++)
        {
            if(indegree[i] == 0)
            {
                que.push(i);
                indegree[i] = -1;
            }
        }
    }
}
