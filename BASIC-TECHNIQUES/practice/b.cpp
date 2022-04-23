#include <bits/stdc++.h>

using namespace std;
char ansTemplate[] = "\nmaximum subarray sum is : ";

int algorithm1(int n, int array[])
{
    // o(n^3)
    int best = 0;
    for (int a = 0; a < n; a++)
    {
        for (int b = a; b < n; b++)
        {
            int sum = 0;
            for (int c = a; c <= b; c++)
            {
                sum += array[c];
            }
            best = max(best, sum);
        }
    }
    return best;
}

int algorithm2(int n, int array[])
{
    // o(n^2)
    int best = 0;
    for (int a = 0; a < n; a++)
    {
        int sum = 0;
        for (int b = a; b < n; b++)
        {
            sum += array[b];
            best = max(best, sum);
        }
    }
    return best;
}

int algorithm3(int n, int array[])
{
    // o(n)
    int best = 0;
    int sum = 0;

    for (int a = 0; a < n; a++)
    {
        sum = max(array[a], sum + array[a]);
        best = max(best, sum);
    }
    return best;
}

int main()
{
    int array[] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int n = sizeof(array) / sizeof(array[0]);
    
    cout << ansTemplate << algorithm1(n, array);
    cout << ansTemplate << algorithm2(n, array);
    cout << ansTemplate << algorithm3(n, array);
}