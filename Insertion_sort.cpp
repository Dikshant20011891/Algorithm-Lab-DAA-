#include<iostream>
using namespace std;

void insertion(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int k = arr[i];
        int j = i-1;

        while(j>=0 && arr[j] > k)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = k;
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

    insertion(arr,n);

    cout<<"Sorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

// First Pass:
//    12   	   11   	   13   	   5   	   6   
//    11   	   12   	   13   	   5   	   6   
// Second Pass:
//    11   	   12   	   13   	   5   	   6   
// Third Pass:
//    11   	   12   	   13   	   5   	   6   
//    11   	   12   	   5   	   13   	   6   
//    11   	   5   	   12   	   13   	   6   
//    5   	   11   	   12   	   13   	   6   
// Fourth Pass:
//    5   	   11   	   12   	   13   	   6   
//    5   	   11   	   12   	   6   	   13   
//    5   	   11   	   6   	   12   	   13   
//    5   	   6   	   11   	   12   	   13   