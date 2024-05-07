/**
 *  @file: 80A_PanoramixsPrediction.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/80/A
 *  @date: 06-05-2024
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool is_prime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = n + 1; i <= m; i++)
    {
        if (is_prime(i))
        {
            if (i == m && is_prime(m))
            {
                cout << "YES" << endl;
                return 0;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}