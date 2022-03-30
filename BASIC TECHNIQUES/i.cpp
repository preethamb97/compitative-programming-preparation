#include <bits/stdc++.h>

using namespace std;

int *bubbleSortAlgorithm(int arr[], int n)
{
    // O(n^2)
    for (int a = 0; a < n; ++a)
    {
        for (int b = 0; b < n - 1; ++b)
        {
            if (arr[b + 1] < arr[b])
            {
                // int temp = arr[b + 1];
                // arr[b + 1] = arr[b];
                // arr[b] = temp;
                swap(arr[b], arr[b + 1]);
            }
        }
    }
    return arr;
}

void printer(int arr[], int n)
{
    for (int a = 0; a < n; ++a)
    {
        cout << arr[a] << " ";
    }
    cout << endl;
}

int main()
{
    int array[] = {6, 2, 1, 5, 4, 6, 8, 91, 2, 3};
    int n = sizeof(array) / sizeof(array[0]);
    int *bubbleSort = bubbleSortAlgorithm(array, n);
    printer(bubbleSort, n);
}