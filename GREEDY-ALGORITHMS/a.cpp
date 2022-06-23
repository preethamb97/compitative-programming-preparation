#include <bits/stdc++.h>
using namespace std;

void printeFunction(vector<int> resultCoins)
{
    cout << "The optimal solution is: ";
    for (auto x : resultCoins)
    {
        cout << x << " ";
    }
    cout << endl;
}

vector<int> problemAlgorithm(vector<int> currency, int inputCurrencyValue)
{
    vector<int> resultCoins;
    int currentIndex = currency.size() - 1;
    while (inputCurrencyValue > 0 && currentIndex >= 0)
    {
        if (currency[currentIndex] <= inputCurrencyValue)
        {
            resultCoins.push_back(currency[currentIndex]);
            inputCurrencyValue -= currency[currentIndex];
        }
        else
        {
            currentIndex--;
        }
    }
    return resultCoins;
}

void coinbaseProblem()
{
    vector<int> currency = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int inputCurrency = 1234;
    printeFunction(problemAlgorithm(currency, inputCurrency));
}

int main()
{
    coinbaseProblem();
}