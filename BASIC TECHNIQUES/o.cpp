#include <bits/stdc++.h>

using namespace std;

int main()
{
    bitset<10> bs;
    bs[1] = 1;
    bs[4] = 1;
    bs[6] = 1;
    bs[2] = 1;
    cout << "4th bit is " << bs[4] << endl;
    cout << "5th bit is " << bs[5] << endl;

    bitset<10> s(string("1010101010"));
    cout << "4th bit is " << s[4] << endl;
    cout << "5th bit is " << s[5] << endl;
    cout << "number of ones in bitset s is " << s.count() << endl;

    bitset<10> a(string("1000000000"));
    bitset<10> b(string("1010101010"));
    cout << "a&b " << (a & b) << endl;
    cout << "a|b " << (a | b) << endl;
    cout << "a^b " << (a ^ b) << endl;
}