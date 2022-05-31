// Program to find three indices i, j, k such that arr[i] + arr[j] = arr[k].

#include<iostream>  
 using namespace std;

void sum(int arr[], int n)
{
    bool flag = true;
    for (int k = 0; k < n; k++)
    {
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (arr[i] + arr[j] == arr[k])
            {
                if (flag)
                    flag = false;
                    cout << i << " " << j << " " << k << endl;
                    i++;
                    j--;
            }
            else if (arr[i] + arr[j] < arr[k])
                i++;
            else
                j--;
        }
    }
    if (flag)
    {
        cout << "No Sequence found" << endl;
    }
}

int main()
{

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sum(arr, n);
    }
}
