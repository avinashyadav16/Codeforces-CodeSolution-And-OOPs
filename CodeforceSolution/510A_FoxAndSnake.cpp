/**
 *  @file: 510A_FoxAndSnake.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/510/A
 *  @date: 14-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, totalOddes = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {

            for (int j = 0; j < m; j++)
            {
                cout << "#";
            }
        }
        else
        {
            ++totalOddes;
            for (int j = 0; j < m; j++)
            {
                if (totalOddes % 2 == 1 && j == m - 1)
                {
                    cout << "#";
                }
                else if (totalOddes % 2 == 0 && j == 0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }

    return 0;
}