#include<iostream>
using namespace std;

class Base          //8 bytes
{
    public:
        int A, B;
        void fun()                  //1000
        {
            cout<<"Base fun\n";
        }
        virtual void gun()          //2000
        {
            cout<<"Base gun\n";
        }
        virtual void sun()              //3000
        {
            cout<<"Base sun\n";
        }
        virtual void run()              //4000
        {
            cout<<"Base mun\n";
        }
};

class Derived : public Base     //16 bytes
{
    public:
        int X, Y;
        void gun()                  //5000
        {
            cout<<"Derived gun\n";
        }
        virtual void run()             //6000
        {
            cout<<"Derived run\n";
        }
        virtual void mun()              //7000
        {
            cout<<"Derived mun\n";
        }
};

int main()
{
    
    Derived dobj;
    Base &bref = dobj;  //Upcasting (using reference of type Base class)
    //<- bref is reference of type Base class referring to the object of Derived class.


    bref.fun();  //Base fun() will be called
    bref.gun();  //Derived gun() will be called (use of virtual)
    bref.sun();  //Base sun() will be called
    bref.run();  //Derived run() will be called (use of virtual)
    //bref.mun();  //Error
    

    return 0;
}