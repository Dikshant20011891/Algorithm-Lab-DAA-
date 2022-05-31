/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<vector<pair<int,int> > >  &vec, int e, int a, vector<int> &w)
{
    if(a == 1)
    {
        for(int i=0;i<e;i++)
        {
            int x,y,z;
            cout<<"Enter the edge : ";
            cin>>x>>y;
            cout<<"Enter the weight : "
            cin>>z;
            vec[x].push_back({y,z});
        }
    }
    else
    {
        for(int i=0;i<e;i++)
        {
            int x,y,z;
            cout<<"Enter the edge : ";
            cin>>x>>y;
            cout<<"Enter the weight : "
            cin>>z;
            vec[x].push_back({y,z});
            vec[y].push_back({x,z});
        }
    }
}
void dijkstra(vector<vector<pair<int,int>>> &vec,int v, int e,int a)
{
    vector<int> parent(v);
    for(int i=0;i<v;i++)
    {
        parent[i] = INT_MAX; 
    }
    parent[a] = 0;
    
    
    
int main()
{
    int v,e,a;
    vector<vector<pair<int,int> > > vec(e);
    cout<<"Enter the vertex : ";
    cin>>v;
    cout<<"Enter the edges : ";
    cin>>e;
    cout<<"Enter your choice:\n1.Directed graph\n2.undirected Graph\n";
    cin>>a;
    addEdge(vec,e,a);
    cout<<"Enter the source vertex : ";
    cin>>a;
    dijkstra(vec,v,e,a);
    return 0;
}
