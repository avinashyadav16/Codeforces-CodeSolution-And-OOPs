/**
 *  @file: 1409A_YetAnotherTwoIntegersProblem.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1409/A
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
        long long int a, b, minMove = 0;
        cin >> a >> b;

        vector<int> res(11);
        int diff = abs(a - b);

        if (diff == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 10; i > 0; i--)
            {
                res[i] = diff / i;
                diff -= res[i] * i;
                minMove += res[i];
            }
            cout << minMove << endl;
        }
    }
    return 0;
}