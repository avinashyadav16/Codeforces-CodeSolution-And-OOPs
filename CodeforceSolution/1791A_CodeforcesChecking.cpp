/**
 *  @file: 1791A_CodeforcesChecking.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1791/A
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
        char ch;
        cin >> ch;

        string str = "codeforces";

        string::iterator it = find(str.begin(), str.end(), ch);

        if (it != str.end())
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