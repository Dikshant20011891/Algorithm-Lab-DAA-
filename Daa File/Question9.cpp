/*
Given an unsorted array of positive integers, design an algorithm and
implement it using a program to find whether there are any duplicate elements in the array or  not.
*/

#include <iostream>
using namespace std;
void merge(int arr[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = 0;
    int c[h - l + 1];

    while (i <= mid && j <= h)
    {
        if (arr[i] < arr[j])
        {
            c[k++] = arr[i++];
        }
        else
        {
            c[k++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        c[k++] = arr[i++];
    }
    while (j <= h)
    {
        c[k++] = arr[j++];
    }
    k = 0;
    for (int i = l; i <= h; i++)
    {
        arr[i] = c[k++];
    }
}

void merge_sort(int arr[], int l, int h)
{
    if (l < h)
    {
        int mid = l + (h - l) / 2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, h);
        merge(arr, l, mid, h);
    }
}
bool findDuplicate_sort(int nums[], int n)
{
    merge_sort(nums, 0, n - 1);
    for (int i = 1; i < n; i++)
    {
        if(nums[i] == nums[i-1])
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    bool a;
    a = findDuplicate_sort(nums, n);
    if(a)
    {
        cout<<"NO";
    }
    else{
        cout<<"Yes";
    }
}
