#include<iostream>
using namespace std;

class Base
{
    public:
        int A, B;
    
    Base()
    {
        cout<<"Inside Base constructor.\n";
    }
    ~Base()
    {
        cout<<"Inside Base Destructor.\n";
    }
    void fun()
    {
        cout<<"Inside Base Fun.\n";
    }
};

class Derived : public Base
{
    public:
        int X, Y;
    
    Derived()
    {
        cout<<"Inside Derived class constructor.\n";
    }
    ~Derived()
    {
        cout<<"Inside Derived class Destructor.\n";
    }
    void gun()
    {
        cout<<"Inside Derived gun.\n";
    }

};



int main()
{
    Derived *ptr = NULL;
    Base *ptr1 = NULL;

    ptr1 = new Base;
    
    cout<<"memory for Base object allocated successfully.\n";

    ptr = new Derived; //Contains Memory for Both Classes (Base and Derived).First memory gets allocated for Parent class i.e.Base class and then,
                        // for the child class i.e. Derived class.Deallocation is done Reversly in Allocation.
    cout<<"Memory Allocation is succesful.\n";

    // Use memory
    ptr->fun();
    ptr->gun();

    delete ptr;

    cout<<"Memory De-Allocation is succesful.\n";


    return 0;
}