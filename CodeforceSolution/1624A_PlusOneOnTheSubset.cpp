/**
 *  @file: 1624A_PlusOneOnTheSubset.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1624/A
 *  @date: 03-05-2024
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

        vector<ll> vec(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        cout << abs(*max_element(vec.begin(), vec.end()) - *min_element(vec.begin(), vec.end())) << endl;
    }

    return 0;
}