/**
 *  @file: 228A_IsYourHorseshoeOnTheOtherHoof.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/228/A
 *  @date: 09-04-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> res;
    res.insert(s1);
    res.insert(s2);
    res.insert(s3);
    res.insert(s4);

    cout << 4 - res.size() << endl;

    return 0;
}