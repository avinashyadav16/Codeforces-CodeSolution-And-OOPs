/**
 *  @file: 1722A_SpellCheck.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1722/A
 *  @date: 31-05-2024
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
        ll n, ans = 0;
        cin >> n;

        string str;
        cin >> str;

        unordered_map<char, int> unmap;

        for (ll i = 0; i < n; i++)
        {
            unmap[str[i]]++;
        }

        for (ll i = 0; i < n; i++)
        {
            if (unmap[str[i]] == 1 && str[i] == 'T')
            {
                unmap[str[i]] = 0;
                ans++;
            }
            else if (unmap[str[i]] == 1 && str[i] == 'i')
            {
                unmap[str[i]] = 0;
                ans++;
            }
            else if (unmap[str[i]] == 1 && str[i] == 'm')
            {
                unmap[str[i]] = 0;
                ans++;
            }
            else if (unmap[str[i]] == 1 && str[i] == 'u')
            {
                unmap[str[i]] = 0;
                ans++;
            }
            else if (unmap[str[i]] == 1 && str[i] == 'r')
            {
                unmap[str[i]] = 0;
                ans++;
            }
        }

        if (ans == 5 && n == 5)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}