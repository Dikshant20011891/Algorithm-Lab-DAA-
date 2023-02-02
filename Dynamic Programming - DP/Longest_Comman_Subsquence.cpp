#include<bits/stdc++.h>
using namespace std;

// Recursion
int lcs(string x,string y,int n,int m)
{
    if(n==0 || m==0)
    {
        return 0;
    }

    if(x[n-1] == y[m-1])
    {
        return 1+lcs(x,y,n-1,m-1);
    }

    return max(lcs(x,y,n-1,m),lcs(x,y,n,m-1));
}

int main()
{
    string x,y;
    cout<<"Enter 2 strings :-"<<endl;
    cin>>x>>y;

    cout<<lcs(x,y,x.size(),y.size());
    return 0;
}


// Memoization
int lcs(string x,string y,int n,int m,vector<vector<int>> &dp)
{
    if(n == 0 || m == 0)
    {
        return 0;
    }

    if(dp[n][m] != -1)
    {
        return dp[n][m];
    }

    if(x[n-1] == y[m-1])
    {
        return dp[n][m] = 1+lcs(x,y,n-1,m-1,dp);
    }

    return dp[n][m] = max(lcs(x,y,n-1,m,dp),lcs(x,y,n,m-1,dp));
}

int main()
{
    string x,y;
    cout<<"Enter 2 strings :-"<<endl;
    cin>>x>>y;

    int n = x.size();
    int m = y.size();

    vector<vector<int>> dp(n+1, vector<int> (m+1,-1));
    
    cout<<lcs(x,y,n,m,dp);
    return 0;
}

// Tabulation
int main()
{
    string x,y;
    cout<<"Enter 2 strings :-"<<endl;
    cin>>x>>y;

    int n = x.size();
    int m = y.size();

    vector<vector<int>> dp(n+1, vector<int> (m+1,0));
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(x[i-1] == y[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    cout<<dp[n][m];
    return 0;
}