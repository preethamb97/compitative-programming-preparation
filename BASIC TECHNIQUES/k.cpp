#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(3);
    v.push_back(2);
    v.push_back(9);
    cout << "\n1st element in vector is :" << v[1] << endl;

    for (int a = 0; a < (int)v.size(); ++a)
    {
        cout << "\nvalue of v in for loop ith iteration is: " << v[a];
    }

    for (auto x : v)
    {
        cout << "\n auto value of v in for loop ith iteration is: " << x;
    }

    cout << "\nlast element in array is : " << v.back() << endl;
    v.pop_back();
    cout << "\nlast element in array is : " << v.back() << endl;

    // creating vector with 10 elements initial value as 0
    vector<int> v1(10);

    // creating vector with 10 elements initial value as 5
    vector<int> v2(10, 5);
}