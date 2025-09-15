/**
 *  @file: Lecture_40.cpp
 *  @author: Avinash Yadav
 *  @brief: File I/O in C++: Reading and Writing Files
 *  @date: 21-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
NOTES:
These are some useful classes for working with files in C++
    fstreambase
    ifstream --> derived from fstreambase
    ofstream --> derived from fstreambase

In order to work with files in C++, we'll have to open it.
Primarily, there are 2 ways to open a file:
    Using the constructor
    Using the member function open() of the class

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    string str1 = "40_File_IO_in_C++\n";
    string str2;

    // Opening the file using Constructor:
    // ofstream writing("Lecture_40.txt"); // Write Operation
    // writing << str1;

    ifstream reading("Lecture_40.txt"); // Reading operation
    // reading >> str2;
    getline(reading, str2);
    cout << str2;

    return 0;
}