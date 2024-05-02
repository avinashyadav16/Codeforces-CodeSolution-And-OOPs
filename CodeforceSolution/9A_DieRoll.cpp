/**
 *  @file: 9A_DieRoll.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/9/A
 *  @date: 02-05-2024
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll y, w;
    cin >> y >> w;

    int currMax = max(y, w);

    switch (currMax)
    {
    case 1:
        cout << "1/1" << endl;
        break;
    case 2:
        cout << "5/6" << endl;
        break;
    case 3:
        cout << "2/3" << endl;
        break;
    case 4:
        cout << "1/2" << endl;
        break;
    case 5:
        cout << "1/3" << endl;
        break;
    case 6:
        cout << "1/6" << endl;
        break;
    }
    return 0;
}