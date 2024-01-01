/**
 *  @file: 001_Minimize_The_Maximum_Of_Two_Arrays.cpp
 *  @author: Avinash Yadav
 *  @brief: https://leetcode.com/problems/minimize-the-maximum-of-two-arrays/description/
 *  @level: Medium
 *  @date: 01-01-2024
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int calculateGCD(int num1, int num2)
    {
        if (num2 == 0)
        {
            return num1;
        }
        return calculateGCD(num2, num1 % num2);
    }

    int calculateLCM(long long num1, long long num2)
    {
        long long temp = (num1 / calculateGCD(num1, num2)) * num2;
        return (temp > INT_MAX) ? INT_MAX : temp;
    }

public:
    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2)
    {
        int LCM = calculateLCM(divisor1, divisor2);
        int result = -1;
        int start = 1, end = INT_MAX;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            int countDivBy1 = mid / divisor1, countDivBy2 = mid / divisor2;

            if (uniqueCnt1 + uniqueCnt2 <= mid - mid / LCM &&
                uniqueCnt1 <= mid - countDivBy1 &&
                uniqueCnt2 <= mid - countDivBy2)
            {
                result = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        return result;
    }
};