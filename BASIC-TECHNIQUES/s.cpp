#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> p;
    p.push(4);
    p.push(2);
    p.push(41);

    cout << "p top: " << p.top() << endl;
    p.pop();
    cout << "p top: " << p.top() << endl;

    p.push(46);
    cout << "p top: " << p.top() << endl;
}