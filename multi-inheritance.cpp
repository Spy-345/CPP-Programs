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

class DerivedX : public Derived
{
    public:
        int i, j;
    
    DerivedX()
    {
        cout<<"Inside Constructor of DerivedX.\n";
    }
    
    ~DerivedX()
    {
        cout<<"Inside Destructor of DerivedX.\n";
    }
    void sun()
    {
        cout<<"Inside sun.\n";
    }

};


int main()
{
    //There is no need to create object to display it's size.
    cout<<"Size of Base:"<<sizeof(Base)<<"\n";  //8
    cout<<"Size of Derived:"<<sizeof(Derived)<<"\n";  //16
    cout<<"Size of Derived_2:"<<sizeof(DerivedX)<<"\n";  //24

    DerivedX dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();

    return 0;
}