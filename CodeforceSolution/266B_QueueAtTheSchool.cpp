/**
 *  @file: 266B_QueueAtTheSchool.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/266/B
 *  @date: 08-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, t;
    string str;
    cin >> n >> t >> str;

    while (t--)
    {
        for (long long int i = 1; i < n; ++i)
        {
            if (str[i] == 'G' && str[i - 1] == 'B')
            {
                str[i] = 'B';
                str[i - 1] = 'G';
                ++i;
            }
        }
    }
    cout << str << endl;

    return 0;
}
