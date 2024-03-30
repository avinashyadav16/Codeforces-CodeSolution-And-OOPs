/**
 *  @file: 08_Hybrid_Inheritance.cpp
 *  @author: Avinash Yadav
 *  @brief: CPP code for Hybrid Inheritance
 *  @date: 30-10-2023
 */
/*
                              +----------------------+
                              |      Person          |
                              +----------------------+
                              | - name: string       |
                              | - age: int           |
                              | + setPersonDetails() |
                              +----------------------+
                                     /          \
                                    /            \
                                   /              \
                                  /                \
                                 /                  \
                     +--------------------+     +-------------------------+
                     |    Employee        |     |     Student             |
                     +--------------------+     +-------------------------+
                     | - company: string  |     | - university: string    |
                     | + setEmployeeDetails()   | | + setStudentDetails() |
                     +--------------------+     +-------------------------+
                                    \              /
                                     \            /
                                      \          /
                                       \        /
                                    +-------------------------------------+
                                    |TeachingAssistant                    |
                                    +-------------------------------------+
                                    | - subject: string                   |
                                    | + setTeachingAssistantDetails()     |
                                    | + displayTeachingAssistantDetails() |
                                    +-------------------------------------+

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
};

// Derived class from Employee and Student - TeachingAssistant
class TeachingAssistant : public Employee, public Student
{
public:
    string subject;

    void setTeachingAssistantDetails(string n, int a, string c, string u, string s)
    {
        Employee::setEmployeeDetails(n, a, c);
        Student::setStudentDetails(n, a, u);
        subject = s;
    }

    void displayTeachingAssistantDetails()
    {
        cout << "Name: " << Employee::name << endl;
        cout << "Age: " << Employee::age << endl;
        cout << "Company: " << company << endl;
        cout << "University: " << university << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    TeachingAssistant ta;
    ta.setTeachingAssistantDetails("Avinash", 25, "SRM University", "SRM University", "Computer Science");
    ta.displayTeachingAssistantDetails();
    return 0;
}
