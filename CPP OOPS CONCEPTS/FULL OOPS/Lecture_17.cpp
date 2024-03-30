/**
 *  @file: Lecture_17.cpp
 *  @author: Avinash Yadav
 *  @brief: Inheritance Syntax & Visibility Mode in C++
 *  @date: 11-11-2023
 */

#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    // Private members are not accessible in derived classes.
    int id;
    float salary;

public:
    Employee() {}
    Employee(int empID, float empSalary)
    {
        cout << "Constructor called from Base Class." << endl;
        id = empID;
        salary = empSalary;
    }

    void display(void)
    {
        cout << "Employee ID: " << id << ", Salary: " << salary << endl;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Notes:
    - Default visibilty mode is private.
    - Private Visibility Mode:
            - Public Members of the base class becomes private members of the derived class.
    - Public Visibility Mode:
            - public Members of the base class becomes Public members of the derived class.

    - The private members of the base class can't be inherited in any case.

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Derived class Syntax:
// class {{deriverd-class-name}} : {{visibility-mode}} {{base-class-name}}

class Programmer : public Employee
{
public:
    string codingLan;

    // Using base class constructor in the member initializer list.
    Programmer(int empid, float empSalary, string lan) : Employee(empid, empSalary)
    {
        codingLan = lan;
    }

    // Function to display programmer details.
    void display(void)
    {
        Employee::display(); // Call base class display function.
        cout << "Programming Language: " << codingLan << endl;
    }
};

int main()
{
    // Creating Employee objects
    cout << endl;
    Employee emp1(1000, 5000), emp2(1001, 6000), emp3(1003, 7000);

    // Displaying employee details
    cout << endl;
    emp1.display();
    emp2.display();
    emp3.display();

    // Creating Programmer objects
    cout << endl;
    Programmer pro1(10, 8000, "Java"), pro2(20, 9000, "C++");

    // Displaying programmer details
    cout << endl;
    pro1.display();
    pro2.display();

    return 0;
}
