/**
 *  @file: 467A_GeorgeAndAccommodation.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/467/A
 *  @date: 05-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, count = 0;
    cin >> t;

    pair<int, int> p1[t];

    for (int i = 0; i < t; i++)
    {
        cin >> p1[i].first >> p1[i].second;
        if ((p1[i].second - p1[i].first) >= 2)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
