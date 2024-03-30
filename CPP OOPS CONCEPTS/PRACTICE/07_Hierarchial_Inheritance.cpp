/**
 *  @file: 07_Hierarchial_Inheritance.cpp
 *  @author: Avinash Yadav
 *  @brief: CPP code for Heirarchial Inheritance
 *  @date: 30-10-2023
 */
/*
                                    +------------------+
                                    |     Person       |
                                    +------------------+
                                    | - name: string   |
                                    | - age: int       |
                                    +------------------+
                                            ||
                                            ||
                                    +------------------+
                                    |    Employee      |
                                    +------------------+
                                    | - company: string|
                                    +------------------+
                                            ||
                                            ||
                                    +------------------+
                                    |    Student       |
                                    +------------------+
                                    | - university: string|
                                    +------------------+
                                            ||
                                            ||
                                    +------------------+
                                    |     Teacher      |
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

    void setPersonDetails(string n, int a)
    {
        name = n;
        age = a;
    }
};

// Derived class from Person - Employee
class Employee : public Person
{
public:
    string company;

    void setEmployeeDetails(string n, int a, string c)
    {
        setPersonDetails(n, a);
        company = c;
    }

    void displayEmployeeDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Company: " << company << endl;
    }
};

// Derived class from Person - Student
class Student : public Person
{
public:
    string university;

    void setStudentDetails(string n, int a, string u)
    {
        setPersonDetails(n, a);
        university = u;
    }

    void displayStudentDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "University: " << university << endl;
    }
};

// Hierarchical inheritance
class Teacher : public Person
{
public:
    string subject;

    void setTeacherDetails(string n, int a, string s)
    {
        setPersonDetails(n, a);
        subject = s;
    }

    void displayTeacherDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    Employee emp;
    emp.setEmployeeDetails("Avinash Yadav", 30, "Yadav Phrama");
    emp.displayEmployeeDetails();

    Student stu;
    stu.setStudentDetails("Ram Singh", 20, "SRM University");
    stu.displayStudentDetails();

    Teacher teacher;
    teacher.setTeacherDetails("Mr. Rao", 40, "Math");
    teacher.displayTeacherDetails();

    return 0;
}
