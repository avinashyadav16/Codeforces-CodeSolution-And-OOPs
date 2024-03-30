/**
 *  @file: Lecture_52.cpp
 *  @author: Avinash Yadav
 *  @brief: List In C++ STL
 *  @date: 25-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

void display(list<int> &l)
{
    for (list<int>::iterator itr = l.begin(); itr != l.end(); ++itr)
    {
        cout << *itr << " ";
    }
}

int main()
{
    list<int> list1;    // Zero length list
    list<int> list2(3); // List of size 3

    list1.push_back(10);
    list1.push_back(78);
    list1.push_back(96);
    list1.push_back(47);
    list1.push_back(15);

    list<int>::iterator itr1 = list1.begin();

    cout << *itr1 << " ";
    cout << *(++itr1) << " ";
    cout << *(++itr1) << " ";
    cout << *(++itr1) << " ";
    cout << *(++itr1) << " ";
    cout << endl;

    list<int>::iterator itr2 = list1.begin();
    while (itr2 != list1.end())
    {
        cout << *itr2 << " ";
        ++itr2;
    }
    cout << endl;

    list1.pop_back();
    display(list1);
    cout << endl;

    list1.pop_front();
    display(list1);
    cout << endl;

    list1.remove(96);
    display(list1);
    cout << endl;

    list1.sort();
    display(list1);
    cout << endl;

    list1.reverse();
    display(list1);
    cout << endl;
    cout << endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    display(list2);
    cout << endl;

    list<int>::iterator itr3 = list2.begin();
    *itr3 = 45;
    itr3++;
    *itr3 = 90;
    itr3++;
    *itr3 = 135;

    display(list2);
    cout << endl;
    cout << endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    list1.sort();
    list2.sort();
    list1.merge(list2);
    display(list1);
    cout << endl;

    return 0;
}