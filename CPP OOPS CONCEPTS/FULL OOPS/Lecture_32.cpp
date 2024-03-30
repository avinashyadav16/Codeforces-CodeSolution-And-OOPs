/**
 *  @file: Lecture_32.cpp
 *  @author: Avinash Yadav
 *  @brief: Array of Objects Using Pointers in C++
 *  @date: 13-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

class ShopItems
{
private:
    int ID;
    float price;

public:
    void setData(int item_id, float item_price)
    {
        ID = item_id;
        price = item_price;
    }

    void getData(void)
    {
        cout << "Item ID: " << ID << endl
             << "Item Price: " << price << endl;
    }
};

int main()
{
    int shop_items;
    cout << "Enter Number of Shop Items: ";
    cin >> shop_items;

    cout << endl;

    ShopItems *ptr = new ShopItems[shop_items];
    ShopItems *tempPtr = ptr;

    int item_id;
    float item_price;
    for (int i = 0; i < shop_items; i++)
    {
        cout << "Enter item ID: ";
        cin >> item_id;
        cout << "Enter Item Price: ";
        cin >> item_price;

        //(*ptr).setData(item_id, item_price);  // same function as of the below one
        ptr->setData(item_id, item_price);
        ptr++;
    }

    cout << endl;

    for (int j = 0; j < shop_items; j++)
    {
        tempPtr->getData();
        tempPtr++;
    }

    return 0;
}