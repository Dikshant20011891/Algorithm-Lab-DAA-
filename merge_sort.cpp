#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int h)
{
	int i=l,j=mid+1,k=0;
	int c[h-l+1];
	
	while(i<=mid && j<=h)
	{
		if(arr[i]<arr[j])
		{
			c[k++] = arr[i++];
		}
		else
		{
			c[k++] = arr[j++];
		}
	}
	while(i<= mid)
	{
		c[k++] = arr[i++];
	}
	while(j<=h)
	{
		c[k++] = arr[j++];
	}
	k =0;
	for(int i=l;i<=h;i++)
	{
		arr[i] = c[k++];
	}
}

void merge_sort(int arr[],int l,int h)
{
	if(l<h)
	{
		int mid = l+(h-l)/2;
		merge_sort(arr,l,mid);
		merge_sort(arr,mid+1,h);
		merge(arr,l,mid,h);
	}
}
		
int main()
{
	int arr[] = {5,2,1,6,7,8,1,5,2,10};
	int n = 10;
	merge_sort(arr,0,n-1);
	
	cout<<"Sorted Array :- ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
