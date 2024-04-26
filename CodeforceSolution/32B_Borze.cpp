/**
 *  @file: 32B_Borze.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/32/B
 *  @date: 26-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string givenStr, ansStr = "";
    cin >> givenStr;

    for (long long int i = 0; i < givenStr.size(); i++)
    {
        if (givenStr[i] == '-' && givenStr[i + 1] == '-')
        {
            ansStr += '2';
            i++;
        }
        else if (givenStr[i] == '-' && givenStr[i + 1] == '.')
        {
            ansStr += '1';
            i++;
        }
        else if (givenStr[i] == '.')
        {
            ansStr += '0';
        }
    }

    cout << ansStr << endl;

    return 0;
}