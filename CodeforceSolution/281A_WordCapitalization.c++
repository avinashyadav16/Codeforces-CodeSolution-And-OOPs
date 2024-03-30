/**
 *  @file: 281A_WordCapitalization.c++
 *  @author: Avinash Yadav
 *  @brief: https://codeforces.com/problemset/problem/281/A
 *  @date: 28-03-2024
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    char c1;
    string word, cap_sub_word;
    cin >> word;

    c1 = word[0];

    size = word.length();
    cap_sub_word = word.substr(1, size);

    cout << (char)toupper(c1);
    cout << cap_sub_word;
    
    return 0;
}