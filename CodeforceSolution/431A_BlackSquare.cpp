/**
 *  @file: 431A_BlackSquare.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/431/A
 *  @date: 02-05-2024
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int arr[4], totalCal = 0;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    string str;
    cin >> str;

    for (ll i = 0; i < str.size(); i++)
    {
        totalCal += (arr[(str[i] - '0') - 1]);
    }
    cout << totalCal << endl;

    return 0;
}