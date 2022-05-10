#include <bits/stdc++.h>

using namespace std;

void printFunction(string methodName, vector<vector<int>> board)
{
    cout << "backtracking using " << methodName << " : " << endl;
    for (auto x : board)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool isSafeToPlace(int n, int row, int col, vector<vector<int>> board)
{
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 1)
        {
            return false;
        }
    }

    int rowE = row;
    int colE = col;
    while (rowE >= 0 && colE >= 0)
    {
        if (board[rowE][colE] == 1)
        {
            return false;
        }
        rowE--;
        colE--;
    }

    rowE = row;
    colE = col;
    while (rowE >= 0 && colE < n)
    {
        if (board[rowE][colE] == 1)
        {
            return false;
        }
        rowE--;
        colE++;
    }
    return true;
}

bool nQueenAlogorithm(int n, int row, vector<vector<int>> board, int count)
{
    if (count == n)
    {
        printFunction("N queen Problem", board);
    }

    for (int col = 0; col < n; col++)
    {
        if (isSafeToPlace(n, row, col, board))
        {
            board[row][col] = 1;

            if (nQueenAlogorithm(n, row + 1, board, count + 1))
            {
                return true;
            }
            board[row][col] = 0;
        }
    }
    return false;
}

void nQueenProblem()
{
    // inititalizing array of n*m with 0s
    vector<vector<int>> chessBoard(4, vector<int>(4, 0));
    nQueenAlogorithm(4, 0, chessBoard, 0);
}

int main()
{
    nQueenProblem();
}