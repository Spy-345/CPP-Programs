#include<iostream>
using namespace std;

class Base
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:

        Base()  //default constructor
        {
            i = 10;
            j = 20;
            k = 30;
        }
        
};

class Derived : public Base
{
    public:
        void Fun()
        {
            cout<<"Value of public base i :"<<i<<"\n";
            // cout<<"Value of private base j :"<<j<<"\n";
            cout<<"Value of protected base k :"<<k<<"\n";
        }

};

int main()
{
    Derived dobj;

    dobj.Fun();


    return 0;
}