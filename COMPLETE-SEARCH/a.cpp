#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> allSubsets;
vector<int> numbers = {0, 1, 2};

void printFunction(string methodName)
{
    cout << "Subset generation using " << methodName << " : " << endl;
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

void bitManipulationAlgo()
{
    int numSize = numbers.size();
    int totalSubsetPossible = (1 << numSize);
    for (int i = 0; i < totalSubsetPossible; i++)
    {
        vector<int> subset;
        for (int j = 0; j < numSize; j++)
        {
            if (i & (1 << j))
            {
                subset.push_back(numbers[j]);
            }
        }
        allSubsets.push_back(subset);
    }
    return;
}

void recursionSubsetMethod()
{
    vector<int> emptySubset;
    generateSubsetUsingRecursionAlgo(emptySubset, 0);
    printFunction("recursion");
    allSubsets = {};
}

void bitManipulationMethod()
{
    bitManipulationAlgo();
    printFunction("Bit Manipulation");
}

int main()
{
    recursionSubsetMethod();
    bitManipulationMethod();
}
