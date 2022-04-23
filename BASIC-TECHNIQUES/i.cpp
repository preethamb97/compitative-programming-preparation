#include <bits/stdc++.h>

using namespace std;

void bubbleSortAlgorithm(int arr[], int n)
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
}

void printer(int arr[], int n)
{
    for (int a = 0; a < n; ++a)
    {
        cout << arr[a] << " ";
    }
    cout << endl;
}

void merge(int arr[], int l, int m, int r)
{
    int a1 = m - l + 1;
    int a2 = r - m;
    int arr1[a1], arr2[a2];
    for (int a = 0; a < a1; ++a)
    {
        arr1[a] = arr[a + l];
    }

    for (int b = 0; b < a2; ++b)
    {
        arr2[b] = arr[b + m + 1];
    }

    int c = 0;
    int d = 0;
    int k = l;

    while (c < a1 && d < a2)
    {
        if (arr1[c] <= arr2[d])
        {
            arr[k] = arr1[c];
            c++;
        }
        else
        {
            arr[k] = arr2[d];
            d++;
        }
        k++;
    }

    while (c < a1)
    {
        arr[k] = arr1[c];
        c++;
        k++;
    }

        while (d < a2)
    {
        arr[k] = arr2[d];
        d++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int array[] = {6, 2, 1, 5, 4, 6, 8, 91, 2, 3};
    int n = sizeof(array) / sizeof(array[0]);
    printer(array, n);
    bubbleSortAlgorithm(array, n);
    printer(array, n);

    int array1[] = {6, 2, 1, 5, 4, 6, 8, 91, 2, 3};
    n = sizeof(array1) / sizeof(array1[0]);
    printer(array1, n);
    mergeSort(array1, 0, n);
    printer(array1, n);
}