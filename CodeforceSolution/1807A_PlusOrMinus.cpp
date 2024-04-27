/**
 *  @file: 1807A_PlusOrMinus.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1807/A
 *  @date: 27-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;

        if ((a + b) == c)
        {
            cout << "+" << endl;
        }
        else if ((a - b) == c)
        {
            cout << "-" << endl;
        }
    }

    return 0;
}