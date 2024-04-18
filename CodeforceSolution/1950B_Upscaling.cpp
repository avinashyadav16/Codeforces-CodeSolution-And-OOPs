/**
 *  @file: 1950B_Upscaling.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1950/B
 *  @date: 18-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int totalCells = 2 * n;
        int col = false;
        vector<vector<char>> res(totalCells, vector<char>(totalCells));

        for (int i = 0; i < totalCells; i += 2)
        {
            for (int j = 0; j < totalCells; j += 2)
            {
                if (col == false)
                {
                    res[i][j] = '#';
                    res[i][j + 1] = '#';
                    res[i + 1][j] = '#';
                    res[i + 1][j + 1] = '#';
                }
                else
                {
                    res[i][j] = '.';
                    res[i][j + 1] = '.';
                    res[i + 1][j] = '.';
                    res[i + 1][j + 1] = '.';
                }
                col = !col;
            }
            if (n % 2 == 0)
            {
                col = !col;
            }
        }

        for (int i = 0; i < totalCells; i++)
        {
            for (int j = 0; j < totalCells; j++)
            {
                cout << res[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}