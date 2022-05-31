/*
Given an unsorted array of integers, design an algorithm and implement a program to sort this array using selection sort.
Your program should also find the number of comparisons and the number of swaps required.
*/

#include <iostream>      
using namespace std;
void selectionSort(int arr[], int n)
{
    int i, j, min, s = 0;
    int comp = 0;
    for (i = 0; i < n - 1; i++)
    {
        min = i;

        for (j = i + 1; j < n; j++)
        {
            comp++;
            if (arr[j] < arr[min])
                min = j;
        }
        s++;
        swap(arr[min], arr[i]);
    }
    cout << "Comparisons = " << comp << endl;
    cout << "Swaps = " << s << endl;
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
        {
            cin >> arr[i];
        }
        selectionSort(arr, n);

        cout << "Sorted array:\n";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] <<" ";
        }
    }
    return 0;
}