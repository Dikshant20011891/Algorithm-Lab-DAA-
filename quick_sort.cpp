#include<iostream>
using namespace std;

int partition(int arr[],int l,int h)
{
	int pivot = arr[l];
	int i = l,j = h;
	
	while(i<=j)
	{
		while(arr[i] <= pivot)
		{
			i++;
		}
		while(arr[j] > pivot)
		{
			j--;
		}
		
		if(i<j)
		{
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[l],arr[j]);
	return j;
}

void quick_sort(int arr[],int l,int h)
{
	if(l<=h)
	{
		int mid = partition(arr,l,h);
		
		quick_sort(arr,l,mid-1);
		quick_sort(arr,mid+1,h);
	}
}

int main()
{
	int arr[] = {5,6,1,4,2,7,10,5,2,8};
	int n = 10;
	
	quick_sort(arr,0,n-1);
	cout<<"Sorted Array :- ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

