/**
 *  @file: 268A_Games.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/268/A
 *  @date: 12-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int totalGames = n * (n - 1);

    vector<pair<int, int>> teams(n);

    for (long long int i = 0; i < n; i++)
    {
        cin >> teams[i].first >> teams[i].second;
    }

    long long int count = 0;
    for (long long int i = 0; i < n; i++)
    {
        for (long long int j = 0; j < n; j++)
        {
            if (i != j && teams[i].first == teams[j].second)
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
