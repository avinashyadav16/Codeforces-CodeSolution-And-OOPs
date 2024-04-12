/**
 *  @file: 1954A_PaintingTheRibbon.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/contest/1954/problem/A
 *  @date: 12-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

string solvePaintingRibbon(int parts, int colours, int bobColours)
{
    if (parts - (parts / colours + (parts % colours != 0)) <= bobColours)
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
}

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int colours, bobColours, parts;
        cin >> parts >> colours >> bobColours;
        cout << solvePaintingRibbon(parts, colours, bobColours) << endl;
    }
    return 0;
}