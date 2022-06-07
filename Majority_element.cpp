
#include <iostream>
using namespace std;

void majority(int n,int arr[])
{
    int c = 1;
    int x = arr[0];
    for(int i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            c++;
        }
        else
        {
            c--;
        }
        if(c==0)
        {
            c = 1;
            x = arr[i];
        }
    }
    c = 0;
    for(int i=0;i<n;i++)
    {
        if(x == arr[i])
        {
            c++;
        }
    }
    if(c>(n/2))
    {
        cout<<"Majority element = "<<x<<endl;
        return;
    }
    cout<<"Majority element does not exist"<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    majority(n,arr);
    return 0;
}
