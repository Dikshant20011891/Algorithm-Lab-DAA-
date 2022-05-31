// Program to Implement Linear Search Method and also find Total No of Comparisons.
#include<iostream>
using namespace std;

bool linearSearch(int a[],int n, int key,int &no_of_comparisions)
{
    for(int i=0;i<n;i++)
    {
        no_of_comparisions++; 
        if(key == a[i])
            return true;
    }
return false;
}

int main()
{
    int n,key, T; 
    cin >> T; 
    while (T--)
    {
        cout<<"\nEnter array size: ";
        cin>>n;
        int a[n],no_of_comparisions=0; 
        cout<<"Enter Array elements\n"; 
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<"Enter the element to search in array: "; 
        cin>>key;
        if(linearSearch(a,n,key,no_of_comparisions))
        {
            cout<<key<<" is found"<<endl;
            cout<<"No of Comparisons="<<no_of_comparisions;

        }
        else{
                cout<<key<<" is NOT found"<<endl;
                cout<<"No of Comparisons = "<<no_of_comparisions;
        }
        cout<<endl;
    }
    return 0;
}