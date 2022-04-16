#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a = 0, b = sizeof(arr) / sizeof(arr[0]) - 1;
    while (a <= b)
    {
        int k = (a + b) / 2;
        if (arr[k] == x)
        {
            cout << "\n\nFound x : " << arr[k];
        }
        if (arr[k] > x)
        {
            b = k - 1;
        }
        else
        {
            a = k + 1;
        }
    }
}