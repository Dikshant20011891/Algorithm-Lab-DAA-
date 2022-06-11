/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

void isbipartite(vector<vector<int>> &vec,int v,int s)
{
    int color[v];
    
    for(int i=0;i<v;i++)
    {
        color[i] = -1;
    }
    
    queue<int> q;
    q.push(s);
    color[s] = 0;
    
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for(int i=0;i<v;i++)
        {
            if(vec[x][i] == 1)
            {
                if(color[i] == -1)
                {
                    color[i] = 1-color[x];
                    q.push(i);
                }
                else if(color[i] == color[x])
                {
                    cout<<"Graph is not bipartite";
                    return;
                }
            }
        }
        
    }
    cout<<"Graph is bipartite";
}

int main()
{
    int v;
    cin>>v;
    vector<vector<int>> vec(v,vector<int> (v,0));
    
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cin>>vec[i][j];
        }
    }
    int s;
    cin>>s;
    isbipartite(vec,v,s);
    return 0;
}
