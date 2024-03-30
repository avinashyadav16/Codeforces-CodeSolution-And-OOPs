/**
 *  @file: Lecture_42.cpp
 *  @author: Avinash Yadav
 *  @brief: File I/O in C++: open() and eof() functions
 *  @date: 21-11-2023
 */

#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    ofstream input;
    input.open("Lecture_40.txt");
    input << "This is open() method example.\n";
    input << "Second method of writing in the file.";
    input.close();

    ifstream output;
    output.open("Lecture_40.txt");
    string str;
    while (output.eof() == 0)
    {
        getline(output, str);
        cout << str << endl;
    }
    output.close();

    return 0;
}