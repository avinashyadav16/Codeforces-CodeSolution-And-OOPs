/**
 *  @file: Lecture_41.cpp
 *  @author: Avinash Yadav
 *  @brief: File I/O in C++: Read/Write in the Same Program & Closing Files
 *  @date: 21-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // connecting our file with file_out stream
    ofstream file_out("Lecture_40.txt");

    // creating a name string variable and filling it with string entered by the user
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    // writing a string to the file
    file_out << "My name is " + name;

    // disconnecting our file
    file_out.close();

    // connecting our file with file_in stream
    ifstream file_in("Lecture_40.txt");

    // creating a content string variable and filling it with string present there in the text file
    string content;
    getline(file_in, content);
    cout << "The content of the file is: " << content;

    // disconnecting our file
    file_in.close();
    return 0;
}
