#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> allPermutations;
vector<int> numbers = {0, 1, 2};

void printFunction(string methodName)
{
    cout << "Subset generation using " << methodName << " : " << endl;
    for (auto x : allPermutations)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void generatePermAlgo(vector<int> permutation, vector<bool> numcopy)
{
    int numSize = numbers.size();
    int permSize = permutation.size();
    if (permSize == numSize)
    {
        allPermutations.push_back(permutation);
        return;
    }
    for (int num = 0; num < numSize; num++)
    {
        if (numcopy[num])
            continue;
        permutation.push_back(numbers[num]);
        numcopy[num] = true;
        generatePermAlgo(permutation, numcopy);
        numcopy[num] = false;
        permutation.pop_back();
    }
}

void generatingPermutationUsingRecursion()
{
    vector<int> empty;
    vector<bool> numcopy(numbers.size(), false);
    generatePermAlgo(empty, numcopy);
    printFunction("test");
}

int main()
{
    generatingPermutationUsingRecursion();
}