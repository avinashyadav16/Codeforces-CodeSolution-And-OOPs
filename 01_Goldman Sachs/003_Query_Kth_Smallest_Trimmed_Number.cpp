/**
 *  @file: 003_Query_Kth_Smallest_Trimmed_Number.cpp
 *  @author: Avinash Yadav
 *  @brief: https://leetcode.com/problems/query-kth-smallest-trimmed-number/description/
 *  @level: Medium
 *  @date: 02-01-2024
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> smallestTrimmedNumbers(vector<string> &nums, vector<vector<int>> &queries)
    {
        int numLen = nums.size();

        vector<pair<string, int>> trimmedNum(numLen);

        vector<int> answer;

        for (auto &query : queries)
        {
            int smallestNum = query[0];
            int trimLength = query[1];

            for (int i = 0; i < numLen; ++i)
            {
                trimmedNum[i] = {nums[i].substr(nums[i].size() - trimLength), i};
            }

            sort(trimmedNum.begin(), trimmedNum.end());

            answer.push_back(trimmedNum[smallestNum - 1].second);
        }

        return answer;
    }
};