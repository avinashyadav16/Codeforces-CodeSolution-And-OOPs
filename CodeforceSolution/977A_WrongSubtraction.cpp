/**
 *  @file: 977A_WrongSubtraction.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/977/A
 *  @date: 02-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0 && n != 0)
        {
            n /= 10;
        }
        else
        {
            n -= 1;
        }
    }

    cout << n << endl;

    return 0;
}