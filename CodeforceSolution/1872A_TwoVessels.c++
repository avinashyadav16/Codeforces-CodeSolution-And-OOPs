/**
 *  @file: 1872A_TwoVessels.c++
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1872/A
 *  @date: 28-03-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b)
        {
            cout << 0 << endl;
        }
        else if ((a + b) <= c)
        {
            cout << 1 << endl;
        }
        else
        {
            double total = (a + b) / 2;
            double maxVolume = max(a, b);

            cout << ceil((maxVolume - total) / c) << endl;
        }
    }
    return 0;
}
