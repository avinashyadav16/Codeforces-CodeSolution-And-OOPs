/**
 *  @file: 1951C_TicketHoarding.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/contest/1951/problem/C
 *  @date: 06-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int testcases;
    cin >> testcases;
    while (testcases--)
    {
        long long int n, m, k;
        cin >> n >> m >> k;

        int Arr[n];
        vector<pair<int, int>> vecPair;

        for (int i = 0; i < n; i++)
        {
            cin >> Arr[i];
            vecPair.push_back({Arr[i], i});
        }

        sort(vecPair.begin(), vecPair.end());
        vector<int> tempVec(n, 0);

        for (int i = 0; i < vecPair.size(); i++)
        {
            if (k > 0)
            {
                tempVec[vecPair[i].second] = min(m, k);
                k -= min(m, k);
            }
        }
        int ans = 0;
        int extra = 0;
        for (int i = 0; i < n; i++)
        {
            ans += (tempVec[i] * (Arr[i] + extra));
            extra += tempVec[i];
        }
        cout << ans << endl;
    }
    return 0;
}