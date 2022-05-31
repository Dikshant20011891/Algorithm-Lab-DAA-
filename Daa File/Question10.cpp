/*
Given an unsorted array of integers, design an algorithm and implement
it using a program to sort an array of elements by dividing the array into two subarrays and
combining these subarrays after sorting each one of them.
Your program should also find a number of comparisons and inversions during sorting the array.
*/

#include <iostream>
using namespace std;
static int s = 0;
static int i = 0; 
void merge(int arr[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = 0;
    int c[h - l + 1];

    while (i <= mid && j <= h)
    {
        s++;
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
void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << "Before sorting - \n";

        printArray(a, n);
        merge_sort(a, 0, n - 1);
        cout << "\nAfter sorting - \n";
        printArray(a, n);
        cout << "\nComparisons: " << s << endl;
    }
    return 0;
}
