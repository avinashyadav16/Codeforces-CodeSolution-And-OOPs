/**
 *  @file: Lecture_14.cpp
 *  @author: Avinash Yadav
 *  @brief: Copy Constructor in C++
 *  @date: 08-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

class Numbers
{
private:
    int a;

public:
    Numbers()
    {
        a = 0;
    }

    Numbers(int num)
    {
        a = num;
    }

    // Copy Constructor:
    // When no copy constructor is found or defined, the compiler supplies its own default copy constructor.
    // Even if we remove the below copy constructor then also the program will run smoothly.
    Numbers(Numbers &obj)
    {
        cout << "\nCopy Constructor Called!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The Number is: " << a << endl;
    }
};

int main()
{
    // Numbers num1 = Numbers(10);
    Numbers n1, n2, n3(10), n4;
    n1.display();
    n2.display();
    n3.display();

    // Creating object n3_copy as of n3, just resembling as of the n3
    Numbers n3_copy(n3); // Copy Constructor Envoked.
    n3_copy.display();

    n4 = n3; // Copy Constructor Will Not Be Envoked And Nothing Will Happen.
    cout << endl;
    n4.display();

    Numbers n5 = n3; // Copy Constructor Envoked.
    n5.display();

    return 0;
}
