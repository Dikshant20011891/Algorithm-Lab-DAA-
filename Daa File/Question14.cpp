/*
Given an unsorted array of integers, design an algorithm and implement it using
a program to find whether two elements exist such that their sum is equal to the given key element.
*/

#include <iostream> 
#include <algorithm> 
using namespace std;
void findPair(int nums[], int n, int target)
{
    sort(nums, nums + n);
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (nums[low] + nums[high] == target)
        {
            cout << "Pair found " << nums[low] << ", " << nums[high];
            cout << endl;
            return;
        }
        (nums[low] + nums[high] < target) ? low++ : high--;
    }
    cout << "Pair not found";
}
int main()
{
    int T, tar,n;
    cin >> T;
    while (T--)
    {
        cin >> n >> tar;
        int nums[n];
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        findPair(nums, n, tar);
    }
}
