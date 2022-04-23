#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> m;
    m["apple"] = 20;
    m["banana"] = 40;
    m["grapes"] = 70;
    m["jackfruit"] = 10;

    cout << "jackfruit rate is: " << m["jackfruit"] << endl; // 10
    cout << "pinaple rate is: " << m["pinaple"] << endl;     // 0 ->> if not exists

    if (m.count("jackfruit"))
    {
        cout << "jackfruit exists in m map" << endl;
        // checks if exists or not (m.count("jackfruit"))
    }

    for (auto x : m)
    {
        cout << "fruit name is " << x.first << " rate is " << x.second << endl;
    }
}