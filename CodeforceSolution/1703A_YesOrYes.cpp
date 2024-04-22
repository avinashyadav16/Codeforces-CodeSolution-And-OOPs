/**
 *  @file: 1703A_YesOrYes.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1703/A
 *  @date: 20-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        transform(str.begin(), str.end(), str.begin(), ::tolower);

        if (str.length() == 3 && (str == "yes"))
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