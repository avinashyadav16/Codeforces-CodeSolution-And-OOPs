/**
 *  @file: 381A_SerejaAndDima.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/381/A
 *  @date: 22-04-2024
 *  @tag: greedy, implementation, two pointers
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    vector<long> vec(n);

    for (long long int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int i = 0, j = n - 1, count = 0;
    int sSum = 0, dSum = 0;

    while (i <= j)
    {
        if (count % 2 == 0)
        {
            if (vec[i] > vec[j])
            {
                sSum += vec[i];
                i++;
            }
            else
            {
                sSum += vec[j];
                j--;
            }
        }
        else
        {
            if (vec[i] > vec[j])
            {
                dSum += vec[i];
                i++;
            }
            else
            {
                dSum += vec[j];
                j--;
            }
        }
        count++;
    }

    cout << sSum << " " << dSum << endl;

    return 0;
}