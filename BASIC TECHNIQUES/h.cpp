#include <bits/stdc++.h>
#define FORLOOP(i, a, b) for (int i = a; i < b; i++)
#define SQ(a) a *a
#define SQ1(a) (a) * (a)
using namespace std;

int main()
{
    FORLOOP(j, 1, 5)
    {
        cout << "\nnumber is: " << j;
    }

    cout << "\nSQ is: " << SQ(3 + 3);   // ✗
    cout << "\nSQ1 is: " << SQ1(3 + 3); // ✓
}