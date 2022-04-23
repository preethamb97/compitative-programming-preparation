#include <bits/stdc++.h>

using namespace std;

int M = 1e9 + 7;

int binaryExponent(int a, int b)
{
    // cout << "\ta : " << a << "\tb : " << b << "\n";
    if (b == 0)
        return 1;
    int result = binaryExponent(a, b / 2);
    cout << "\ta : " << a << "\tb : " << b << "\tb & 1\t" << (b & 1) << "\n";

    if (b & 1)
    {
        return (a * (result * result) % M) % M;
    }
    return (result * result) % M;
}

int main()
{
    int n = 2, m = 13;

    // low time complexity
    //  for (int i = 0; i <= m; i++)
    //  {
    //      x *= n;
    //  }

    cout << "x is: \n"
         << binaryExponent(n, m) << "\n";
}