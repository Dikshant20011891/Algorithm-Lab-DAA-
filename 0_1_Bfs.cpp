#include<bits/stdc++.h>
using namespace std;

void bfs01(vector<pair<int,int>> adj[],int v,int s)
{
    int dis[v];
    for(int i=0;i<v;i++)
    {
        dis[i] = INT_MAX;
    }

    dis[s] = 0;
    deque<int> que;
    que.push_back(s);
    while(!que.empty())
    {
        int u = que.front();
        que.pop_front();

        for(int i=0;i<adj[u].size();i++)
        {
            if( dis[adj[u][i].first] > dis[u] + adj[u][i].second )
            {
                dis[adj[u][i].first] = dis[u] + adj[u][i].second;

                if(adj[u][i].second == 0)
                {
                    que.push_front(adj[u][i].first);
                }
                else
                {
                    que.push_back(adj[u][i].first);
                }
            }
        }
    }

    for(int i=0;i<v;i++)
    {
        cout<<dis[i]<<endl;
    }
}

int main()
{
    int v,e;

    cout<<"Enter the no. of vertex and edges : ";
    cin>>v>>e;

    vector<pair<int,int>> adj[v];
    for(int i=0;i<e;i++)
    {
        int u,v,wt;
        //cout<<"Enter the edge and weight : ";
        cin>>u>>v>>wt;

        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }

    int src;
    cout<<"Enter the source vertex : ";
    cin>>src;

    bfs01(adj,v,src);

    return 0;
}