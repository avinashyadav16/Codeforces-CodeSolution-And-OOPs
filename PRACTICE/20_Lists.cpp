/**
 *  @file: 20_Lists.cpp
 *  @author: Avinash Yadav
 *  @brief: Lists
 *  @date: 14-11-2023
 */

#include <iostream>
#include <list>
#include <algorithm> // For sort, reverse, unique
using namespace std;

int main()
{
    list<int> numbers = {1, 2, 3, 4, 5, 6, 7, 1};

    int n = numbers.size();
    cout << "\n\nSize of the list is: numbers.size(): " << n;

    cout << "\n\nInitial List: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }

    numbers.push_front(100);
    cout << "\n\nnumbers.push_front(100): ";
    for (int num : numbers)
    {
        cout << num << " ";
    }

    numbers.push_back(110);
    cout << "\n\nnumbers.push_back(110): ";
    for (int num : numbers)
    {
        cout << num << " ";
    }

    numbers.pop_front();
    cout << "\n\nnumbers.pop_front(): ";
    for (int num : numbers)
    {
        cout << num << " ";
    }

    numbers.pop_back();
    cout << "\n\nnumbers.pop_back(): ";
    for (int num : numbers)
    {
        cout << num << " ";
    }

    numbers.sort();
    cout << "\n\nnumbers.sort(): ";
    for (int num : numbers)
    {
        cout << num << " ";
    }

    numbers.reverse();
    cout << "\n\nnumbers.reverse(): ";
    for (int num : numbers)
    {
        cout << num << " ";
    }

    numbers.unique();
    cout << "\n\nnumbers.unique(): ";
    for (int num : numbers)
    {
        cout << num << " ";
    }

    if (numbers.empty())
    {
        cout << "\n\nif numbers.empty() then List is Empty.";
    }
    else
    {
        cout << "\n\nif !(numbers.empty()) then List is Not Empty.";
    }

    return 0;
}
