#include <bits/stdc++.h>
using namespace std;

void printFunction(string functionName, vector<int> output)
{
    cout << functionName << " Values of array are : ";
    for (auto val : output)
    {
        cout << val << " ";
    }
    cout << endl;
}

vector<int> manualSorting(vector<int> arr, string order = "ASC")
{
    for (int i = 0; i < arr.size(); ++i)
    {
        for (int j = 0; j < arr.size(); ++j)
        {
            if (order == "DESC")
            {
                if (arr[i] > arr[j])
                {
                    swap(arr[i], arr[j]);
                }
            }
            else
            {
                if (arr[i] < arr[j])
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
    return arr;
}

int main()
{
    vector<int> twodarray = {2, 3, 1, 10, 230, 1, 22, 4, 66, 9, 22};
    sort(twodarray.begin(), twodarray.end());
    printFunction("normal sort asc", twodarray);

    sort(twodarray.begin(), twodarray.end(), [](int a, int b)
         { return a > b; });
    printFunction("normal sort desc", twodarray);

    twodarray = manualSorting(twodarray);
    printFunction("manualSorting sort asc", twodarray);

    twodarray = manualSorting(twodarray, "DESC");
    printFunction("manualSorting sort desc", twodarray);
}