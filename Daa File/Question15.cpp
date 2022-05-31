/*
You have been given two sorted integer arrays of size m and n. Design an algorithm
and implement it using a program to find a list of elements which are common to both.
*/

#include<iostream>
using namespace std;
void printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}
void inputArray(int arr[], int x)
{
    for (int i = 0; i < x; i++)
        cin >> arr[i];
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cout << "\nEnter size of 2 array - ";
        int m, n;
        cin >> m >> n;
        int arr1[m], arr2[n];
        inputArray(arr1, m);
        inputArray(arr2, n);
        printIntersection(arr1, arr2, m, n);
    }
}
