/**
 *  @file: 1950C_ClockConversion.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1950/C
 *  @date: 18-04-2024
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        int hours = stoi(str.substr(0, 2));
        int minutes = stoi(str.substr(3, 2));

        if (hours == 12)
        {
            cout << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << " PM" << endl;
        }
        else if (hours > 12)
        {
            hours -= 12;
            cout << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << " PM" << endl;
        }
        else if (hours == 0)
        {
            hours += 12;
            cout << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << " AM" << endl;
        }
        else
        {
            cout << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << " AM" << endl;
        }
    }

    return 0;
}