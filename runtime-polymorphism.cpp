#include<iostream>
using namespace std;

class Base
{
    public:             //Access Specifier
        int A, B;

        void fun()                  //Function Defination   Add-1000
        {
        cout<<"Base fun\n";
        }
        void gun(int i)                  //Function Defination   Add-2000
        {
        cout<<"Base gun with one parameter.\n";
        }
        void gun(int i, int j)      //Overloaded function Defination  Add-3000
        {
        cout<<"Base gun with two parameter.\n";
        }

};

class Derived : public Base
{
    public:
        int X, Y;

        void sun()              //Function Defination     Add-4000
        {
            cout<<"Derived Sun\n";
        }
        void fun(int i)             //Overrided Defination or Function Re-Defination (hide the inherited defination of fun() from base)   Add-5000
        {
            cout<<"Derived fun\n";
        }

};

int main()
{
    Derived dobj;

    dobj.Base::fun();       //CALL  5000
    dobj.gun(11);      //CALL 2000
    dobj.gun(10, 20);   //CALL 3000
    dobj.sun();         //CALL 4000

    return 0;
}