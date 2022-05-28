/******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

static int a = 1;
bool comp(pair<pair<int,int>,int> &p1,pair<pair<int,int>,int> &p2)
{
    return (p1.second < p2.second);
}

void checkvisited(pair<int,int> p1, int parent[])
{
    if((parent[p1.first] == -1 && parent[p1.second] == -1) || (parent[p1.first] == -1 && parent[p1.second] == 1) ||
    (parent[p1.first] == 1 && parent[p1.second] == -1))
    {
        cout<<a<<" Edge"<<p1.first<<" "<<p1.second<<endl;
        a++;
        parent[p1.first] = 1;
        parent[p1.second] == -1;
    }
}
void kruskal(vector<pair<pair<int,int>,int> > vec,int v, int e)
{
    int parent[v];
    
    for(int i=0;i<v;i++)
    {
        parent[i] = -1;
    }
    sort(vec.begin(),vec.end(),comp);
    
    for(int i=0;i<e;i++)
    {
        checkvisited(vec[i].first,parent);
    }
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
