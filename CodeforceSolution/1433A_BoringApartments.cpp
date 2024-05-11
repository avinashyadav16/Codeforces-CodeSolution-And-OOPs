/**
 *  @file: 1433A_BoringApartments.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1433/A
 *  @date: 09-05-2024
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<int> v;

        v.push_back(1);
        v.push_back(11);
        v.push_back(111);
        v.push_back(1111);

        for (int i = 2; i < 10; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                int d = v[j] * i;
                v.push_back(d);
            }
        }

        int c = 0;

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == n)
            {
                if (v[i] < 10)
                {
                    c++;
                }
                else if (v[i] < 100)
                {
                    c += 2;
                }
                else if (v[i] < 1000)
                {
                    c += 3;
                }
                else if (v[i] < 10000)
                {
                    c += 4;
                }
                break;
            }

            if (v[i] < 10)
            {
                c++;
            }
            else if (v[i] < 100)
            {
                c += 2;
            }
            else if (v[i] < 1000)
            {
                c += 3;
            }
            else if (v[i] < 10000)
            {
                c += 4;
            }
        }

        cout << c << endl;
    }

    return 0;
}