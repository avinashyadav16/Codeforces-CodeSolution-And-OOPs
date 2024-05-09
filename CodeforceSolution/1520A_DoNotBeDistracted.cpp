/**
 *  @file: 1520A_DoNotBeDistracted.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1520/A
 *  @date: 06-05-2024
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        string str;
        cin >> str;

        bool suspicious = false;

        unordered_set<char> seen;

        for (ll i = 0; i < n; i++)
        {
            char task = str[i];

            // If the current task has been seen before and
            // it's different from the previous one,
            // it's a distraction
            if (seen.find(task) != seen.end() && str[i] != str[i - 1])
            {
                cout << "NO" << endl;
                suspicious = true;
                break;
            }

            // Add the current task to the set of seen tasks
            seen.insert(task);
        }

        // If there were no distractions
        if (!suspicious)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}