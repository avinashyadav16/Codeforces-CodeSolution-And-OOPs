/**
 *  @file: 03_Multi_Level_Inheritance.cpp
 *  @author: Avinash Yadav
 *  @brief: Code for Multi Level Inheritance in CPP
 *  @date: 26-10-2023
 */

#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    int veh_id;
    void read()
    {
        cout << "Enter the Vehicle ID: ";
        cin >> veh_id;
    }

    void display()
    {
        cout << "Vehicle ID is: " << veh_id << endl;
    }
};

class Four_Wheeler : public Vehicle
{
public:
    string name;
    string fuel_type;

    void input1()
    {
        cout << "Enter the Vehicle Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter the fuel type( D / P): ";
        getline(cin, fuel_type);
    }

    void output1()
    {
        cout << "Vehicle name is: " << name << endl;
        cout << "Vehicle fuel type is: " << fuel_type << endl;
    }
};

class Car : public Four_Wheeler
{
public:
    int kmph;

    void input2()
    {
        cout << "Enter the vehicle speed: ";
        cin >> kmph;
    }
    void output2()
    {
        cout << "Vehicle speed is: " << kmph << endl;
    }
};

int main()
{
    Car sports_car;
    sports_car.read();
    sports_car.input1();
    sports_car.input2();

    cout << endl;

    sports_car.display();
    sports_car.output1();
    sports_car.output2();
    return 0;
}