#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> que;
    int c = 0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        que.push(x);
    }
    
    while(que.size()>1)
    {
        int a = que.top();
        que.pop();
        int b = que.top();
        que.pop();
        
        int tmp = a+b;
        c += tmp;
        que.push(tmp);
    }
    cout<<c;
    return 0;
}
