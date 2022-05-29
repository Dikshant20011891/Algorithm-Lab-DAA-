#include<iostream>
#include<limits.h>
using namespace std;

int mini(int arr[],int x,int n)
{
	int j=0;
	int m = INT_MAX;
	for(int i=x;i<n;i++)
	{
		if(m>arr[i])
		{
			m = arr[i];
			j = i;
		}
	}
	return j;
}
			
void selection_sort(int arr[],int n)
{
	int j=0;
	for(int i=0;i<n-1;i++)
	{
		int k = mini(arr,i,n);
		if(i!=k)
		{
			swap(arr[k],arr[j++]);
		}
	}
}
	 
int main()
{
	 int arr[] = {3,5,11,2,6,1,9,10,2};
	 int n = 9;
	 
	 selection_sort(arr,n);
	 cout<<"Sorted array :- ";
	 for(int i=0;i<n;i++)
	 {
	 	cout<<arr[i]<<" ";
	 }
	 return 0;
}
