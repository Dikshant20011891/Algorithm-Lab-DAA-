/*
Given an unsorted array of integers, design an algorithm and
implement it using a program to find Kth smallest or largest element in the array.
*/

#include<iostream>    
#include<limits.h>
using namespace std;
int partition(int arr[], int l, int r)
{
    int x = arr[r], i = l;
    for (int j = l; j <= r - 1; j++)
    {
        if (arr[j] <= x)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[r]);
    return i;
}

int kthSmallest(int arr[], int l, int r, int k)
{
    if (k > 0 && k <= r - l + 1)
    {
        int pos = partition(arr, l, r);
        if (pos - l == k - 1)
            return arr[pos];
        if(pos - l > k - 1) 
            return kthSmallest(arr, l, pos - 1, k);
            return kthSmallest(arr, pos + 1, r, k - pos + l - 1);
    }
    return INT_MAX;
}

int findKthElementByQuickSelect(int arr[], int left, int right, int k)
{
    if (k >= 0 && k <= right - left + 1)
    {
        int pos = partition(arr, left, right);
        if (pos - left == k)
            return arr[pos];
        if (pos - left > k)
            return findKthElementByQuickSelect(arr, left, pos - 1, k);
        return findKthElementByQuickSelect(arr, pos + 1, right, k - pos + left - 1);
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int k;
        cin >> k;
        cout << "\nK'th smallest element is " << kthSmallest(arr, 0, n - 1, k);
        cout << "\nK'th largest element is " << findKthElementByQuickSelect(arr, 0, n - 1, k);
    }
    return 0;
}