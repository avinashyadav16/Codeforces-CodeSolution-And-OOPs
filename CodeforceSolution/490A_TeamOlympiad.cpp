/**
 *  @file: 490A_TeamOlympiad.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/490/A
 *  @date: 28-04-2024
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    cin >> n;

    vector<ll> prog, math, pe;

    for (ll i = 1; i <= n; i++)
    {
        ll sub;
        cin >> sub;

        if (sub == 1)
            prog.push_back(i);
        else if (sub == 2)
            math.push_back(i);
        else if (sub == 3)
            pe.push_back(i);
    }

    ll totalTeams = min(prog.size(), min(math.size(), pe.size()));
    cout << totalTeams << endl;

    for (ll i = 0; i < totalTeams; i++)
    {
        cout << math[i] << " " << prog[i] << " " << pe[i] << endl;
    }

    return 0;
}