#include <bits/stdc++.h>

using namespace std;

// formulas
// (a + b)mod m = ((a mod m) + (b mod m)) mod m
// (a - b)mod m = ((a mod m) - (b mod m)) mod m
// (a . b)mod m = ((a mod m) . (b mod m)) mod m
// (a / b) mod m = (a x (inverse of b if exists)) mod m
int main()
{
    // n!
    long long x = 1;
    int M = 1e9 + 7;
    // int M = 47;
    int n;
    cout << "Enter the number to find its Factorial \t:";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        x = (x * i) % M;
    }
    cout << "x is\t:" << x << "\n";
}