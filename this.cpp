/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool comp(vec[0],vec[1])
{
    
}
void kruskal(vector<pair<pair<int,int>,int> > vec,int v, int e)
{
    int parent[v];
    int visited[v] = {0};
    
    for(int i=0;i<v;i++)
    {
        parent[i] = -1;
    }
    sort(vec.begin(),vec.end(),comp);
}

int main()
{
    int v, e;
    cin>>v>>e;
    
    vector<pair<pair<int,int> ,int > > vec;
    
    for(int i=0;i<e;i++)
    {
        int x,y,w;
        cout<<"Enter the edge : ";
        cin>>x>>y;
        cout<<"Enter the weight : ";
        cin>>w;
        
        vec.push_back({{x,y},w});
    }
    
    kruskal(vec,v,e);
}
