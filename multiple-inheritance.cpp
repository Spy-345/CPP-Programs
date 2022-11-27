#include<iostream>
using namespace std;

class Base1     //4 bytes
{
    public:
        int A;
    
    Base1()
    {
        cout<<"inside Constructor of Base1\n";
    }
    ~Base1()
    {
        cout<<"Inside Destructor of Base1\n";
    }
    void Fun()
    {
        cout<<"inside fun\n";
    }

};

class Base2       //12 Bytes
{
    public:
        int I, J, K;
    
    Base2()
    {
        cout<<"inside Constructor of Base2\n";
    }
    ~Base2()
    {
        cout<<"Inside Destructor of Base2\n";
    }
    void Sun()
    {
        cout<<"inside Sun\n";
    }

};

//Not allowed in Java(multiple-inheritance is not allowed)
class Derived : public Base1, public Base2      //Change in sequence of Base1 and Base2 will afect the calling sequence of constructor & destructor. //24 bytes.
                                          
{
    public:
        int X, Y;
    
    Derived()
    {
        cout<<"inside Constructor of Derived\n";
    }
    ~Derived()
    {
        cout<<"Inside Destructor of Derived\n";
    }
    void Gun()
    {
        cout<<"inside Gun\n";
    }


};

int main()
{
    Derived dobj;

    dobj.Fun();
    dobj.Sun();
    dobj.Gun();

    return 0;
}