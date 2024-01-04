/**
 *  @file: 009_Number_Following_A_Pattern.cpp
 *  @author: Avinash Yadav
 *  @brief: https://www.geeksforgeeks.org/problems/number-following-a-pattern3126/1
 *  @level: Medium
 *  @date: 04-01-2024
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string printMinNumberForPattern(string S)
    {
        stack<int> temp_stack;
        int num = 1;
        string result;

        for (int i = 0; i < S.length(); i++)
        {
            temp_stack.push(num++);
            if (S[i] == 'I')
            {
                while (!temp_stack.empty())
                {
                    result += to_string(temp_stack.top());
                    temp_stack.pop();
                }
            }
        }
        temp_stack.push(num++);
        while (!temp_stack.empty())
        {
            result += to_string(temp_stack.top());
            temp_stack.pop();
        }
        return result;
    }
};