/**
 *  @file: 236A_BoyOrGirl.cpp
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/236/A
 *  @date: 28-03-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    unordered_set<char> charSet;
    
    for (char ch : str)
    {
        charSet.insert(ch);
    }

    int count = charSet.size();

    cout << ((count % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");

    return 0;
}