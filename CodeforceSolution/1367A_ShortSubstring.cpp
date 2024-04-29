/**
 *  @file: 1367A_ShortSubstring.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1367/A
 *  @date: 28-04-2024
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
        string str, ans = "";
        cin >> str;

        for (ll i = 0; i < str.size(); i = i + 2)
        {
            ans += str[i];
        }
        if (str.size() == 2)
        {
            cout << str << endl;
        }
        else
        {
            cout << ans + (str[str.size() - 1]) << endl;
        }
    }

    return 0;
}