/**
 *  @file: 06_Multipath_Inheritance.cpp
 *  @author: Avinash Yadav
 *  @brief: CPP code for Multipath Inheritance
 *  @date: 30-10-2023
 */
/*
                                +------------------+
                                |     Person       |
                                +------------------+
                                | - name: string   |
                                | - age: int       |
                                +------------------+
                                        / \
                                       /   \
                                      /     \
                    +----------------+       +--------------------+
                    |    Employee    |       |      Student       |
                    +----------------+       +---------------------+
                    | -company:string|       | - university: string|
                    +----------------+       +---------------------+
                                    \       /
                                     \     /
                                      \   /
                                +------------------+
                                |TeachingAssistant |
                                +------------------+
                                | - subject: string|
                                +------------------+


*/

#include <iostream>
using namespace std;

// Base class - Person
class Person
{
public:
    string name;
    int age;
};

// Intermediate class - Employee
class Employee : public Person
{
public:
    string company;
};

// Intermediate class - Student
class Student : public Person
{
public:
    string university;
};

// Derived class from Employee and Student - TeachingAssistant
class TeachingAssistant : public Employee, public Student
{
public:
    string subject;

    // Explicitly specify the base class for age
    int getAge()
    {
        return Employee::age;
    }
};

int main()
{
    TeachingAssistant ta;

    // Assigning values to the TeachingAssistant object
    ta.Employee::name = "Avinash Yadav";
    ta.Employee::age = 25;
    ta.company = "SRM University";
    ta.Student::university = "SRM University";
    ta.subject = "Computer Science";

    // Printing the details
    cout << "Name: " << ta.Employee::name << endl;
    cout << "Age: " << ta.getAge() << endl;
    cout << "Company: " << ta.company << endl;
    cout << "University: " << ta.Student::university << endl;
    cout << "Subject: " << ta.subject << endl;

    return 0;
}
