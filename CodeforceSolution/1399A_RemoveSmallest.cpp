/**
 *  @file: 1399A_RemoveSmallest.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/1399/A
 *  @date: 20-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

bool checkPossible(int n, set<int> &st)
{
    if (n == 1)
    {
        return true;
    }

    auto it = st.begin();
    auto nextIt = next(it);

    while (nextIt != st.end())
    {
        if (abs(*it - *nextIt) > 1)
        {
            return false;
        }
        ++it;
        ++nextIt;
    }

    return true;
}

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int n, num;
        cin >> n;

        set<int> st;
        for (long long int i = 0; i < n; i++)
        {
            cin >> num;
            st.insert(num);
        }

        cout << (checkPossible(n, st) ? "YES" : "NO") << endl;
    }

    return 0;
}