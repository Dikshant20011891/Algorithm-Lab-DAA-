/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

bool comp(vector<int> x, vector<int> y)
{
    return x[1]>y[1];
}

void job_seq(vector<vector<int>>&vec, int n)
{
    sort(vec.begin(),vec.end(),comp);
    
    int m = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(vec[i][0]> m)
        {
            m = vec[i][0];
        }
    }
    cout<<"Sequence will be : ";
    int v[m];
    for(int i=0;i<m;i++)
    {
        v[i] = -1;
    }
    
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        int k = vec[i][0];
        k--;
        while(v[k] != -1 && k>=0)
        {
            k--;
        }
        if(k>=0)
        {
            v[k] = 0;
            sum += vec[i][1];
            cout<<vec[i][2]<<" ";
        }
    }
    
    cout<<"Total sum : "<<sum<<endl;
}

int main()
{
    int n;
    cout<<"Enter number of parameters : ";
    cin>>n;
    
    vector<vector<int>> vec(n,vector<int> (3,0));
    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the time period : ";
        cin>>vec[i][0];
        cout<<"Enter the profit : ";
        cin>>vec[i][1];
        vec[i][2] = i+1;
    }
    
    job_seq(vec,n);
    return 0;
}
