/**
 *  @file: 723A_TheNewYearMeetingFriends.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/723/A
 *  @date: 17-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> dis(3);
    cin >> dis[0] >> dis[1] >> dis[2];

    sort(dis.begin(), dis.end());

    cout << dis[2] - dis[0] << endl;

    return 0;
}