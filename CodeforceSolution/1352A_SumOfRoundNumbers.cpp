/**
 *  @file: 1352A_SumOfRoundNumbers.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1352/A
 *  @date: 17-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> roundNumbers;

        int multiplier = 1;
        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 0)
            {
                roundNumbers.push_back(digit * multiplier);
            }
            n /= 10;
            multiplier *= 10;
        }

        cout << roundNumbers.size() << endl;
        for (int num : roundNumbers)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}