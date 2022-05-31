/*
Given an unsorted array of integers, design an algorithm and implement it using a program to
sort an array of elements by partitioning the array into two subarrays based on a pivot element
such that one of the sub array holds values smaller than the pivot element while another sub array
holds values greater than the pivot element. Pivot element should be selected randomly from the array.
Your program should also find number of comparisons and swaps required for sorting the array.
*/

#include <iostream>
using namespace std;
static int s = 0;
static int c = 0;
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        c++;
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
            s++;
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

int partition_r(int arr[], int low, int high)
{
    
    int random = low + rand() % (high - low);
    swap(arr[random], arr[high]);
    return partition(arr, low, high);
}

void quickSort(int arr[], int low, int high)
{

    if (low < high)
    {
        int pi = partition_r(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
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
        quickSort(arr, 0, n - 1);
        printf("Sorted array: \n");
        printArray(arr, n);
        cout << "\nSwaps: " << s << endl;
        cout << "Comparisons:" << c << endl;
    }
    return 0;
}
