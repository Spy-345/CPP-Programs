#include<iostream>
using namespace std;

class Base          //8 bytes
{
    public:
        int A, B;
};

class Derived : public Base     //16 bytes
{
    public:
        int X, Y;
};

int main()
{
    Base *bp = NULL;
    Derived *dp = NULL;

    Base bobj;
    Derived dobj;

    bp = &bobj;      //No casting-Allowed
    dp = &dobj;      //No casting-Allowed
    bp = &dobj;      //Upcasting-Allowed
    //dp = &bobj;      //Downcasting- Which is not allowed


    return 0;
}