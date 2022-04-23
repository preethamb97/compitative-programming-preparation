#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(9);
    v.push_back(4);

    for (auto x : v)
    {
        cout << x << "\t";
    }

    cout << endl;

    sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << "\t";
    }

    cout << endl;

    reverse(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << "\t";
    }

    cout << endl;

    random_shuffle(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << "\t";
    }

    cout << endl;
}