#include <bits/stdc++.h>

using namespace std;

/* a better way to compare floating point number is to assume that two numbers 
are equal if the difference between them is less than Σ 
where Σ is the smaller number In practice the number 
can be compared as follows(Σ=1e9)
*/

int main()
{
    double a = 1.2;
    printf("%.9f\n", a);

    double x = 0.3 * 3 + 0.1;

    printf("%.20f\n", x);

    if (abs(a - x) < 1e9)
    {
        cout << "\nA and x are equal\n";
    }
}