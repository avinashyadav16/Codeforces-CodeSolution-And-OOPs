/**
 *  @file: 266A_StonesOnTheTable.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/266/A
 *  @date: 03-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string stones;
    cin >> stones;

    int r = 0, g = 0, b = 0;
    for (int i = 1; i < n; i++)
    {
        if (stones[i - 1] == stones[i])
            if (stones[i] == 'R')
                ++r;
            else if (stones[i] == 'G')
                ++g;
            else if (stones[i] == 'B')
                ++b;
    }

    cout << r + g + b << endl;

    return 0;
}