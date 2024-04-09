/**
 *  @file: 61A_UltraFastMathematician.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/61/A
 *  @date: 09-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n1, n2, result = "";
    cin >> n1 >> n2;

    for (int i = 0; i < n1.length(); ++i)
    {
        if (n1[i] == n2[i])
        {
            result += '0';
        }
        else
        {
            result += '1';
        }
    }

    cout << result << endl;

    return 0;
}