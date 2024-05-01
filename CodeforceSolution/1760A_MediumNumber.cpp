/**
 *  @file: 1760A_MediumNumber.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1760/A
 *  @date: 01-05-2024
 *
 *  @copyright Copyright (c) 2024
 *
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
        ll arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        cout << arr[1] << endl;
    }

    return 0;
}

// int main()
// {
//     ll t;
//     cin >> t;

//     while (t--)
//     {
//         ll a, b, c;
//         cin >> a >> b >> c;

//         ll minimum = min(a, min(b, c));
//         ll maximum = max(a, max(b, c));

//         if (a == minimum && b == maximum)
//         {
//             cout << c << endl;
//         }
//         else if (a == minimum && c == maximum)
//         {
//             cout << b << endl;
//         }
//         else if (b == minimum && a == maximum)
//         {
//             cout << c << endl;
//         }
//         else if (b == minimum && c == maximum)
//         {
//             cout << a << endl;
//         }
//         else if (c == minimum && a == maximum)
//         {
//             cout << b << endl;
//         }
//         else if (c == minimum && b == maximum)
//         {
//             cout << a << endl;
//         }
//     }

//     return 0;
// }