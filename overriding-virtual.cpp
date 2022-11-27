#include<iostream>
using namespace std;

class Base          //8 bytes
{
    public:
        int A, B;
        void fun()
        {
            cout<<"Base fun\n";
        }
        virtual void gun()
        {
            cout<<"Base gun\n";
        }
        virtual void sun()
        {
            cout<<"Base sun\n";
        }
        void mun()
        {
            cout<<"Base mun\n";
        }
};

class Derived : public Base     //16 bytes
{
    public:
        int X, Y;
        void gun()
        {
            cout<<"Derived gun\n";
        }
        void sun()
        {
            cout<<"Derived sun\n";
        }
        virtual void mun()
        {
            cout<<"Derived mun\n";
        }
};

int main()
{
    cout<<"Size fo Base class :"<<sizeof(Base)<<"\n";        //16 bytes
    cout<<"SIze of Derived class :"<<sizeof(Derived)<<"\n";  //24 bytes

    Base *bp = NULL;
    Derived *dp = NULL;
    Derived dobj;

    bp = &dobj;    //Upcasting <- small sized pointer pointing to large sized data.
    
    bp->fun();   //Base fun
    bp->gun();   //Derived gun
    bp->sun();   //Derived sun
    // dp->mun();

    return 0;
}