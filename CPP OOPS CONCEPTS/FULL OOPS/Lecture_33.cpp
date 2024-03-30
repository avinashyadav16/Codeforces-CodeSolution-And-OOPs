/**
 *  @file: Lecture_33.cpp
 *  @author: Avinash Yadav
 *  @brief: this Pointer in C++
 *  @date: 13-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
NOTES:
    “this” is a keyword that is an implicit pointer.
    “this” pointer points to the object which calls the member function.
    An example program is shown below to demonstrate the concept of “this” pointer.
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(4);
    a.getData();
    return 0;
}

/*
class A{
    int a;
    public:
         A & setData(int a){
            this->a = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(4).getData();
    return 0;
}

*/