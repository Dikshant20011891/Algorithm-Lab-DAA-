/*
Given an array of nonnegative integers, design an algorithm and a program to count the
number of pairs of integers such that their difference is equal to a given key, K.
*/
#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cout << "Enter the size of array: " << endl;
        int n, k;
        cin >> n;
        cout << "Enter the array elements" << endl;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << "Enter the key "<< endl;
            cin>>k;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] - a[j] == k)
                    count++;
            }
        }
        cout << count<<endl;
    }
}