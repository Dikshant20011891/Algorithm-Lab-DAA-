#include<iostream>
using namespace std;

void heapify(int arr[],int n,int l)
{
	int large = l;
	int left = 2*l+1;
	int right = 2*l+2;
	
	if(left < n && (arr[large]<arr[left]))
	{
		large = left;
	}
	if(right < n && (arr[large]<arr[right]))
	{
		large = right;
	}
	if(large != l)
	{
		swap(arr[l],arr[large]);
		heapify(arr,n,large);
	}
}

void heap_sort(int arr[],int n)
{
	for(int i=n/2-1;i>=0;i--)
	{
		heapify(arr,n,i);
	}
	for(int i=n-1;i>=0;i--)
	{
		swap(arr[0],arr[i]);
		heapify(arr,i,0);
	}
}

int main()
{
	int arr[] = {4,7,9,3,15,2,9,1,7};
	int n = 9;
	heap_sort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
	
