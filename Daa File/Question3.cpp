//Program to find whether a given key element is present in the sorted array or not. For an array arr[n], search at the indexes arr[0], arr[2], arr[4],. ,arr[2k] and so on. Once the interval (arr[2k] < key < arr[ 2k+1] ) is found, perform a linear search operation from the index 2k to find the element key. 
#include <iostream>
#include <math.h>
using namespace std;
int jumpSearch(int arr[], int x, int n)
{
    int step = sqrt(n);
 5   int prev = 0;
    while (arr[min(step, n) - 1] < x)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
    while (arr[prev] < x)
    {
        prev++;
        if (prev == min(step, n))
            return -1;
    }
    if (arr[prev] == x)
        return prev;
    return -1;
}

int main()
{
    int n, x;
    cout << "Enter array size ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter target element ";
    cin >> x;
    int index = jumpSearch(arr, x, n);
    cout << "\nNumber " << x << " is at index " << index;
    return 0;
}
