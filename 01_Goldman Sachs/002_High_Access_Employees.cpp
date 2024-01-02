/**
 *  @file: 002_High_Access_Employees.cpp
 *  @author: Avinash Yadav
 *  @brief: https://leetcode.com/problems/high-access-employees/description/
 *  @level: Medium
 *  @date: 02-01-2024
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool hasHighAccessFrequency(vector<int> &accessTimes)
    {
        for (int i = 0; i < accessTimes.size() - 2; i++)
        {
            if (accessTimes[i + 2] - accessTimes[i] < 60)
            {
                return true;
            }
        }
        return false;
    }

    vector<string> findHighAccessEmployees(vector<vector<string>> &access_times)
    {
        vector<string> highAccessEmployees;
        unordered_map<string, vector<int>> employeeAccessMap;

        for (auto access : access_times)
        {
            string hours = access[1].substr(0, 2);
            string minutes = access[1].substr(2, 2);
            int totalMinutes = stoi(hours) * 60 + stoi(minutes);

            employeeAccessMap[access[0]].push_back(totalMinutes);
        }

        for (auto employee : employeeAccessMap)
        {
            if (employee.second.size() < 3)
            {
                continue;
            }

            sort(employee.second.begin(), employee.second.end());

            if (hasHighAccessFrequency(employee.second))
            {
                highAccessEmployees.push_back(employee.first);
            }
        }

        return highAccessEmployees;
    }
};
