/**
 *  @file: 469A_IWannaBeTheGuy.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/469/A
 *  @date: 10-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, p;
    cin >> n >> p;

    vector<int> arrX(p);
    for (long long int i = 0; i < p; i++)
    {
        cin >> arrX[i];
    }

    long long int q;
    cin >> q;

    vector<int> arrY(q);
    for (long long int i = 0; i < q; i++)
    {
        cin >> arrY[i];
    }

    for (long long int i = 1; i <= n; i++)
    {
        if (find(arrX.begin(), arrX.end(), i) == arrX.end() && find(arrY.begin(), arrY.end(), i) == arrY.end())
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;

    return 0;
}