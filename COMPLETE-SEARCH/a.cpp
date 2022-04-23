#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> allSubsets;
vector<int> numbers = {0, 1, 2};

void generateSubsetUsingRecursionAlgo(vector<int> &subset, int i)
{
    if (i == (int)numbers.size())
    {
        allSubsets.push_back(subset);
        return;
    }

    // not including current value
    generateSubsetUsingRecursionAlgo(subset, i + 1);
    subset.push_back(numbers[i]);
    generateSubsetUsingRecursionAlgo(subset, i + 1);
    subset.pop_back();
}

void recursionSubsetMethod()
{
    vector<int> emptySubset;
    generateSubsetUsingRecursionAlgo(emptySubset, 0);
    cout << "Subset generation using recursion : " << endl;
    for (auto x : allSubsets)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    recursionSubsetMethod();
}