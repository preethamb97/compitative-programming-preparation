#include <bits/stdc++.h>
using namespace std;

int simpleRecursionMethod(int findFor, vector<int> coins)
{
    if (findFor < 0)
        return 0;
    if (findFor == 0)
        return 0;
    int best = 0;
    for (auto c : coins)
    {
        best = min(best, simpleRecursionMethod(findFor - c, coins) + 1);
    }
    return best;
}

int main()
{
    vector<int> coins = {1, 3, 4};
    cout << "Minimum coins required using simple recursion :" << simpleRecursionMethod(10, coins);
}