// Program to find whether given key element is present in the array or not and also total number of comparisons.
#include <iostream>
using namespace std;
int main()
{
    int n, key;
    cout << "Enter size of array & key element - ";
    cin >> n >> key;
    int arr[n];
    cout << "Enter array elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int low = 0, high = n - 1, count = 0;
    while (low <= high)
    {
        count++;
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            cout << "Key found at index " << mid << endl;
            cout << "Total number of comparisons: " << count << endl;
            return 0;
        }
        else if (arr[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    cout << "Key not found" << endl;
    cout << "Total number of comparisons:" << count << endl;
    return 0;
}
