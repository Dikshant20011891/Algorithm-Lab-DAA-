
#include <bits/stdc++.h>

using namespace std;

void bfs(vector<vector<int>> &vec,int v,int e,int s)
{
    int visit[v] = {0};
    visit[s] = 1;
    queue<int> q;
    q.push(s);
    cout<<"Bfs order : ";
    while(!q.empty())
    {
        int x = q.front();
        cout<<x;
        for(int i=0;i<vec[x].size();i++)
        {
            if(visit[vec[x][i]] != 1)
            {
                q.push(vec[x][i]);
                visit[vec[x][i]] = 1;
            }
        }
        q.pop();
    }
}

int main()
{
    int v,e;
    cin>>v>>e;
    vector<vector<int>> vec(v);
    
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }
    int s;
    cin>>s;
    bfs(vec,v,e,s);
    return 0;
}
