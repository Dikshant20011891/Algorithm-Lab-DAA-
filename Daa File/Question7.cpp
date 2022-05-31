/*
Given an unsorted array of integers, design an algorithm and a program to sort
the array using insertion sort. Your program should be able to find the number of comparisons and shifts
(shifts - total number of times the array elements are shifted from their place) required for sorting the array
*/
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i, key, j, shift = 0, comparisons = 0;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            comparisons++, shift++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    cout << "Total Number of Shifts: " << shift << endl;
    cout << "Total Number of Comparisons: " << comparisons << endl;
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] <<" ";
}
int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        insertionSort(arr, n);
        printArray(arr, n);
    }
}
