/**
 *  @file: 21_Deque.cpp
 *  @author: Avinash Yadav
 *  @brief: CPP code for DEQUE
 *  @date: 16-11-2023
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d = {7, 8, 9, 10};
    cout << "Initial List is: ";
    for (int x : d)
    {
        cout << x << " ";
    }
    cout << "\n\nd.front(): " << d.front() << endl;
    cout << "\nd.back(): " << d.back() << endl;

    d.push_front(1);
    cout << "\nd.push_front(1): ";
    for (int x : d)
    {
        cout << x << " ";
    }

    d.push_back(111);
    cout << "\n\nd.push_back(111): ";
    for (int x : d)
    {
        cout << x << " ";
    }

    cout << "\n\nd.at(3): " << d.at(3) << endl;

    d.pop_front();
    cout << "\nd.pop_front(): ";
    for (int x : d)
    {
        cout << x << " ";
    }
    d.pop_back();
    cout << "\n\nd.pop_back(): ";
    for (int x : d)
    {
        cout << x << " ";
    }

    cout << "\n\nFinal List is: ";
    for (int x : d)
    {
        cout << x << " ";
    }

    return 0;
}