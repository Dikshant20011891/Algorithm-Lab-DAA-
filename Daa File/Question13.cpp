/*
Given an unsorted array of alphabets containing duplicate
elements Design an algorithm and implement it using a program to find which alphabet
has the maximum number of occurrences and print it.
*/

#include <iostream>
#include<string.h>
#define SIZE 256
using namespace std;
char getMaxOccurringChar(char *str)
{
    int count[SIZE] = {0};
    int len = strlen(str);
    int max = 0;
    char result;
    for (int i = 0; i < len; i++)
    {
        count[str[i]]++;
        if (max < count[str[i]])
        {S
            max = count[str[i]];
            result = str[i];
        }
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char str[] = "";
        cin >> str;
        cout << "Max occurring character is " << getMaxOccurringChar(str) << endl;
    }
}
