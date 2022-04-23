#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> s;
    s.push(4);
    s.push(2);
    s.push(41);
    s.push(42);
    s.push(43);
    s.push(44);

    s.pop();
    cout << "s top: " << s.top() << endl;
}