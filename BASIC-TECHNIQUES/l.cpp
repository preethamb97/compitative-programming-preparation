#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s;
    s.insert(2);
    s.insert(1);
    s.insert(4);
    s.insert(5);
    cout << "is 10 exists in s: " << s.count(10) << endl; // returns 1 or 0 , 1 = exists, 0=doesnt exists
    cout << "is 1 exists in s: " << s.count(1) << endl;

    set<int> sstring = {2, 1, 3, 5, 6, 7};
    cout << "size of sstring: " << sstring.size() << endl;
    for (auto x : sstring)
    {
        cout << " value of x is : " << x << endl;
    }

    // set stores unique elements
    // multiset stores multiple instances of an element

    multiset<int> ms;
    ms.insert(5);
    ms.insert(6);
    ms.insert(5);
    ms.insert(5);
    ms.insert(7);
    ms.insert(5);
    ms.insert(5);
    ms.insert(5);
    cout << "count of 5 in multiset is: " << ms.count(5) << endl;

    cout << "size of ms: " << ms.size() << endl;
    for (auto x : ms)
    {
        cout << " value of x is : " << x << endl;
    }

    ms.erase(ms.find(5));
    cout << "count of 5 in multiset is: " << ms.count(5) << endl;

    ms.erase(5); // erases all instances of 5 in multiset
    cout << "count of 5 in multiset is: " << ms.count(5) << endl;
}