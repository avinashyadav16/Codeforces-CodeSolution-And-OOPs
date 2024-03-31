/**
 *  @file: 263A_BeautifulMatrix.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/263/A
 *  @date: 31-03-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[5][5];
    int row, col;

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (matrix[i][j] == 1)
            {
                row = i;
                col = j;
                break;
            }
        }
    }

    int moves = abs(row - 2) + abs(col - 2);

    cout << moves << endl;

    return 0;
}