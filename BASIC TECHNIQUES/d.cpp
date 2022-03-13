#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x = 123456789123456789LL;

    cout << "x is :" << x << "\n";

    int a = 123456789;
    long long b = a * a;            // ✗  -> output -1757895751
    long long c = (long long)a * a; // ✓  -> output 15241578750190521
    long long d = a * 1LL * a;      // ✓  -> output 15241578750190521
    cout << "b is : " << b << "\n";
    cout << "c is : " << c << "\n";
    cout << "d is : " << d << "\n";
}