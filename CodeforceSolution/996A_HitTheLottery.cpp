/**
 *  @file: 996A_HitTheLottery.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/996/A
 *  @date: 12-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

// int coinChange(vector<long long> &coins, long long int amount)
// {
//     vector<long long> dpCoins(amount + 1);
//     dpCoins[0] = 0;

//     for (long long int i = 1; i <= amount; i++)
//     {
//         dpCoins[i] = INT_MAX;

//         for (long long int coin : coins)
//         {
//             if (coin <= i && dpCoins[i - coin] != INT_MAX)
//             {
//                 dpCoins[i] = min(dpCoins[i], 1 + dpCoins[i - coin]);
//             }
//         }
//     }
//     return dpCoins[amount] == INT_MAX ? -1 : dpCoins[amount];
// }

// int main()
// {
//     long long int amount;
//     cin >> amount;

//     vector<long long> coins = {1, 5, 10, 20, 100};

//     cout << coinChange(coins, amount) << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    long long int amount;
    cin >> amount;

    int coins[] = {100, 20, 10, 5, 1};
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        count += amount / coins[i];
        amount %= coins[i];
    }

    cout << count << endl;

    return 0;
}
