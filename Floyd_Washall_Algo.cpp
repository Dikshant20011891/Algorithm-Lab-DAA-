#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define INF 1000

void floyd(int n,vector<vector<int>> &dis)
{
    int i,j,k;

    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(dis[i][j] >(dis[i][k] + dis[k][j]) && (dis[i][k] != INF && dis[k][j] != INF))
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
}

int main()
{
    int n = 4;

    vector<vector<int>> graph = {{0,5,INF,10},
                      {INF,0,3,INF},
                      {INF,INF,0,1},
                      {INF,INF,INF,0}};
    // INF tell that there is no edges between the vertices

    floyd(n,graph);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(graph[i][j] == INF)
            {
                cout<<"INF";
            }
            else{
                cout<<graph[i][j];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}