/**
 *  @file: 1951A_DualTrigger.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/contest/1951/problem/0
 *  @date: 06-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

string solve(int n, vector<int> &s)
{
    if (n == 1)
    {
        if (s[0] == 1)
            return "NO";
        return "YES";
    }

    if (n == 2)
    {
        if (s[0] == 0 && s[1] == 0)
            return "YES";
        return "NO";
    }

    if (accumulate(s.begin(), s.end(), 0) == 2)
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (s[i] == 1 && s[i + 1] == 1)
                return "NO";
        }
        return "YES";
    }

    if (accumulate(s.begin(), s.end(), 0) % 2 == 1)
        return "NO";
    return "YES";
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        vector<int> s(n);
        for (int j = 0; j < n; ++j)
        {
            char ch;
            cin >> ch;
            s[j] = ch - '0';
        }
        cout << solve(n, s) << endl;
    }

    return 0;
}