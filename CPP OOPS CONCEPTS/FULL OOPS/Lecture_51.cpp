/**
 *  @file: Lecture_51.cpp
 *  @author: Avinash Yadav
 *  @brief: Vector In C++ STL
 *  @link:  https://cplusplus.com/reference/vector/vector/
 *  @date: 25-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

template <class T>

void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;        // zero length integer vector
    vector<char> vec2(4);    // 4-element character vector
    vector<char> vec3(vec2); // 4-element character vector from vec2
    vector<int> vec4(6, 3);  // 6-element vector of 3s

    int element, size;
    cout << "Enter the size of your vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);

    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter + 1, 566);
    display(vec1);

    display(vec4);

    return 0;
}