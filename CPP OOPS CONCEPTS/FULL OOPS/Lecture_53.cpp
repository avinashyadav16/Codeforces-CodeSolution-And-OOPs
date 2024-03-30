/**
 *  @file: Lecture_53.cpp
 *  @author: Avinash Yadav
 *  @brief: Map In C++ STL
 *  @date: 25-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> marks;

    marks["Avinash"] = 50;
    marks["Jay"] = 47;
    marks["Rohan"] = 49;

    map<string, int>::iterator itr1;
    for (itr1 = marks.begin(); itr1 != marks.end(); itr1++)
    {
        cout << (*itr1).first << " " << (*itr1).second << endl;
    }
    cout << endl;

    map<string, int>::iterator itr2;
    for (itr2 = marks.begin(); itr2 != marks.end(); itr2++)
    {
        cout << itr2->first << " " << itr2->second << endl;
    }
    cout << endl;

    marks.insert({"Sohan", 43});
    marks.insert({{"Aman", 41}, {"Jatin", 49}});
    for (const auto &entry : marks)
    {
        cout << entry.first << " " << entry.second << endl;
    }
    cout << endl;

    cout << "Size of the map is: " << marks.size() << endl;
    cout << "Max Size of the map is: " << marks.max_size() << endl;
    cout << "Is the map empty: " << marks.empty() << endl;

    return 0;
}