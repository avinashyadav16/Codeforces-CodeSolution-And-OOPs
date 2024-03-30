/**
 *  @file: Lecture_04.cpp
 *  @author: Avinash Yadav
 *  @brief: 1. Static Data Members in C++
 *  @date: 06-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int ID;
    static int count;

public:
    void setID(void)
    {
        cout << "Enter Employee ID: ";
        cin >> ID;
        count++;
    }

    void getID(void)
    {
        cout << "ID of Employee_" << count << " is: " << ID << endl;
        cout << endl;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Notes:
//       Static Variable/Class Variable must be defined outside the class as well.
//       Default value of static data type is: 0
//       We can also initialise its values as:
//       int Employee ::count = 1000;
//       Now this is no longer a object property but it has become a class property
//       So this variable will be shared with all the objects simultaneously
//       To keep the record of all the employees

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Employee ::count;

int main()
{
    Employee avinash, satyam, sattu;
    avinash.setID();
    avinash.getID();

    satyam.setID();
    satyam.getID();

    sattu.setID();
    sattu.getID();

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 *  @file: Lecture_04.cpp
 *  @author: Avinash Yadav
 *  @brief: 2. Static Member Methods in C++
 *  @date: 06-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int ID;
    static int count;

public:
    void setID(void)
    {
        cout << "Enter Employee ID: ";
        cin >> ID;
        count++;
    }

    void getID(void)
    {
        cout << "ID of Employee_" << count << " is: " << ID << endl;
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Notes:
    //     Static Member Functions:
    //         - These are functions that can access only the other static varibales/functions
    //         - They run by the name of class itself. They don't need any object to run.

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    static void getCount(void)
    {
        cout << "The Value of count is: " << count << endl;
        cout << endl;

        // It will throw an error as static member method is trying to access non-static varible ID.
        // cout << ID << endl;
    }
};

int Employee ::count;

int main()
{
    Employee avinash, satyam, sattu;
    avinash.setID();
    avinash.getID();
    Employee::getCount(); // We aren't taking any objct reference for running static getCount function

    satyam.setID();
    satyam.getID();
    Employee::getCount(); // We aren't taking any objct reference for running static getCount function

    sattu.setID();
    sattu.getID();
    Employee::getCount(); // We aren't taking any objct reference for running static getCount function

    return 0;
}