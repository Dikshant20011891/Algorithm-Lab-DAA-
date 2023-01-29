#include<iostream>
using namespace std;

void bubble(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int f = 0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                f = 1;
            }
        }

        if(f == 0)
        {
            break;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    bubble(arr,n);

    cout<<"Sorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}


// First Pass: 
// ( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ) 
// ( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ) 
// ( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 )
// ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 )

// Second Pass: 
// ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ) 
// ( 1 4 2 5 8 ) –> ( 1 2 4 5 8 )
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
// ( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 ) 

// Third Pass: 
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 