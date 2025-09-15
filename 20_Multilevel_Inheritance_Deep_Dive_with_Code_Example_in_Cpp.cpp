/**
 *  @file: Lecture_20.cpp
 *  @author: Avinash Yadav
 *  @brief: Multilevel Inheritance Deep Dive with Code Example in C++
 *  @date: 11-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*

        Notes :
        If we are inheriting B from A and C from B: [ A--->B--->C ]
        1. A is the base class for B and B is the base class for C
        2. A-->B-->C is called Inheritance Path

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Student
{
protected:
    int roll_numb;

public:
    void set_stu(int);
    void get_stu(void);
};

void Student ::set_stu(int roll)
{
    roll_numb = roll;
}

void Student ::get_stu(void)
{
    cout << "Roll Number is: " << roll_numb << endl;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    // void set_marks(int, float, float);
    void get_marks(void);
};

// void Exam::set_marks(int roll, float math, float phy)
// {
//     Student::set_stu(roll);
//     maths = math;
//     physics = phy;
// }

void Exam ::get_marks(void)
{
    cout << "Maths marks is: " << maths << endl;
    cout << "Physics marks is: " << physics << endl;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Result : public Exam
{
private:
    float percentage;

public:
    void set_result(int roll, float math, float phy)
    {
        Student::set_stu(roll);
        Exam::maths = math;
        Exam::physics = phy;
        percentage = (math + phy) / 2;
    }
    void display()
    {
        get_stu();
        get_marks();
        cout << "Precentage of the marks is: " << percentage << "%" << endl;
    }
};

int main()
{
    Result result1;
    result1.set_result(1, 90.9, 98.7);
    result1.display();

    return 0;
}
