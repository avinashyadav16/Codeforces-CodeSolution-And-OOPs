/**
 *  @file: 05_Multiple_Inheritance.cpp
 *  @author: Avinash Yadav
 *  @brief: CPP code for multiple inheritance
 *  @date: 30-10-2023
 */

#include <iostream>
using namespace std;

class Rose
{
public:
    void bloom()
    {
        cout << "Rose: Blooming..." << endl;
    }
};

class Lily
{
public:
    void grow()
    {
        cout << "Lily: Growing..." << endl;
    }
};

class FlowerGarden : public Rose, public Lily
{
public:
    void maintain()
    {
        cout << "Flower Garden: Maintaining..." << endl;
    }
};

int main()
{
    FlowerGarden myGarden;
    myGarden.bloom();
    myGarden.grow();
    myGarden.maintain();
    return 0;
}
