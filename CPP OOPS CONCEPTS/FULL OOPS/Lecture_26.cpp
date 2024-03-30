/**
 *  @file: Lecture_26.cpp
 *  @author: Avinash Yadav
 *  @brief: Constructors in Derived Class in C++
 *  @date: 12-11-2023
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
NOTES:
CONSTRUCTORS IN DERIVED CLASSES
    • We can use constructors in derived classes in C++
    • If base class constructor does not have any arguments, there is no need of any constructor in derived class.
    • But if there are one or more arguments in the base class constructor, derived class need to pass arguments to the base class constructor
    • If both base and derived classes have constructors, base class constructor is executed first.


CONNSTRUCTORS IN MULTIPLE INHERITANCE
    • In multiple inheritance, base classes are constructed in the order in which they appear in the class declaration
    • In multilevel inheritance, the constructors are executed in the order of inheritance


SPECIAL SYNTAX
    • C++ supports an special syntax for passing arguments to multiple base classes
    • The constructor of the derived class receives all the arguments at once and then will pass the calls to the respective base classes
    • The body is called after all the constructors are finished executing.

    Derived-Constructor(arg1, arg2, arg3,...): Base1-Constructor(arg1, arg2), Base2-Constructor(arg3, arg4){
        ...
    } Base1-Constructor(arg1, arg2)


SPECIAL CASE OF VIRTUAL BASE CLASS
    • The constructors for virtual base classes are invoked before an nonvirtual base class
    • If there are multiple virtual base classes, they are invoked in the order declared.
    • Any non-virtual base class are then constructed before the derived class constructor is executed


*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
