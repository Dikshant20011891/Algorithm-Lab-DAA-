//Given a sorted array of positive integers containing few duplicate elements,
// design an algorithm and implement it using a program to find whether the given key element
// is present in the array or not. If present, then also find the number of copies of given key
#include <iostream>
using namespace std;
int first(int *arr, int l, int r, int key, int n)
{
    if (l <= r)
    {
        int mid1 = l + (r - l) / 2;
        if ((mid1 == 0 || arr[mid1 - 1] < key) && arr[mid1] == key)
            return mid1;
        else if (arr[mid1] < key)
            return first(arr, mid1 + 1, r, key, n);
        else
            return first(arr, l, mid1 - 1, key, n);
    }
    return -1;
}

int last(int *arr, int l, int r, int key, int n)
{
    if (l <= r)
    {
        int mid2 = l + (r - l) / 2;
        if ((mid2 == n - 1 || arr[mid2 + 1] > key) && arr[mid2] == key)
            return mid2;
        else if (arr[mid2] > key)
            return last(arr, l, mid2 - 1, key, n);
        else
            return last(arr, mid2 + 1, r, key, n);
    }
    return -1;
}

int main()
{
    int T, n, key;
    cin >> T;

    while (T--)
    {
        cout << "\n\nEnter the size of array: ";
        cin >> n;
        cout << "Enter the elements of array: ";
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << "Enter the key to be searched: ";
        cin >> key;
        int diff = last(arr, 0, n - 1, key, n) - first(arr, 0, n - 1, key, n) + 1;
        if (diff > 0)
        {
            cout << key << "-" << diff << endl;
        }
        else
            cout << "Key not present" << endl;
    }
}
