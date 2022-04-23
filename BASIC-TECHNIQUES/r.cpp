#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;
    q.push(4);
    q.push(2);
    q.push(41);
    q.push(42);
    q.push(43);
    q.push(44);

    cout << "q front: " << q.front() << endl;
    cout << "q back: " << q.back() << endl;
    q.pop();
    cout << "q front: " << q.front() << endl;
    cout << "q back: " << q.back() << endl;
}