/**
 *  @file: 141A_AmusingJoke.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/141/A
 *  @date: 14-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string guest, host, pile;
    cin >> guest >> host >> pile;

    if ((pile.size()) != ((guest.size()) + (host.size())))
    {
        cout << "NO" << endl;
        return 0;
    }

    string name = guest + host;
    sort(name.begin(), name.end());
    sort(pile.begin(), pile.end());

    if (name == pile)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}