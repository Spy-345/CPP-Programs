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
        virtual void run()             //4000
        {
            cout<<"Base run\n";
        }
};

class Derived : public Base     //16 bytes
{
    public:
        int X, Y;
        virtual void fun()
        {
            cout<<"inside Derived fun";
        }
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
    Base *bp = NULL;
    bp = &dobj;      //Upcasting (using Static M.A.)

   // bp = new Derived;     //Upcasting (using Deynamic M.A.)

   // bp = (Derived *)malloc(sizeof(Derived)) <-Above syntax(of dynamic) in C syntax

    bp->fun();  //Base fun() will be called
    bp->gun();  //Derived gun() will be called (use of virtual)
    bp->sun();  //Base sun() will be called
    bp->run();  //Derived run() will be called (use of virtual)
    //bp->mun();  //Error
    

    return 0;
}