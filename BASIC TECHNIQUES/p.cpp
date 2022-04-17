#include <bits/stdc++.h>

using namespace std;

int main()
{
    deque<int> d;
    d.push_back(4);
    d.push_back(7);
    d.push_back(7);
    d.push_back(7);
    d.push_front(98);
    d.push_front(78);
    d.push_front(8);
    d.pop_back();
    d.pop_front();

    for (auto x : d)
    {
        cout << "value of x is: " << x << endl;
    }
}