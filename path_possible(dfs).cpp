
#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>> vec,int s,int d,vector<int> visit)
{
    if(s == d)
    {
        return true;
    }
    visit[s] = 1;
    for(int i=0;i<vec[s].size();i++)
    {
        if(vec[s][i] == 1 && visit[i] == -1)
        {
            if(dfs(vec,i,d,visit))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int> (n,0));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>vec[i][j];
        }
    }
    int s,d;
    cin>>s>>d;
    vector<int> visit(n,-1);
    if(dfs(vec,s,d,visit))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}
