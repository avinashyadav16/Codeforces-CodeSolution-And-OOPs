/**
 *  @file: Lecture_25.cpp
 *  @author: Avinash Yadav
 *  @brief: Code Example Demonstrating Virtual Base Class in C++
 *  @date: 12-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Student
{
protected:
    int roll_number;
    string stu_name;

public:
    void set_details(int roll, string name)
    {
        roll_number = roll;
        stu_name = name;
    }
    void print_roll(void)
    {
        cout << "\nRoll Number: " << roll_number << endl;
        cout << "Student Name: " << stu_name << endl;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Both are valid syntax:
// class Internal : public virtual Student
class Internal : virtual public Student
{
protected:
    float maths_in, physics_in;

public:
    void set_internal(float m1, float m2)
    {
        maths_in = m1;
        physics_in = m2;
    }

    void print_internal(void)
    {
        cout << "\nInternal Marks are: " << endl;
        cout << "Maths Marks: " << maths_in << "/50" << endl;
        cout << "Physics Marks: " << physics_in << "/50" << endl;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class External : virtual public Student
{
protected:
    float maths_ex, physics_ex;

public:
    void set_external(float m3, float m4)
    {
        maths_ex = m3;
        physics_ex = m4;
    }

    void print_external(void)
    {
        cout << "\nExternal Marks are: " << endl;
        cout << "Maths Marks: " << maths_ex << "/50" << endl;
        cout << "Physics Marks: " << physics_ex << "/50" << endl;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Result : public Internal, public External
{
private:
    float total;

public:
    void print_result(void)
    {
        total = maths_in + maths_ex + physics_in + physics_ex;
        print_roll();
        print_internal();
        print_external();

        cout << "\nTotal Marks: " << total << "/200" << endl;
    }
};

int main()
{
    Result avinash;
    avinash.set_details(1, "Avinash Yadav");
    avinash.set_internal(49.8, 48.7);
    avinash.set_external(50, 49);
    avinash.print_result();

    return 0;
}
