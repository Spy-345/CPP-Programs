#include<iostream>
using namespace std;

class Demo
{
    public:
        int x;
        int y;

    Demo()
    {
        cout<<"Inside Constructor"<<"\n";
    }
    ~Demo()
    {
        cout<<"Inside Deastructor"<<"\n";
    }
    void fun()
    {
        cout<<"Inside Fun"<<"\n";
    }

};

int main()
{
    Demo * ptr = NULL;
    ptr = new Demo; 
    
    ptr->fun();
    cout<<"Value of x"<<ptr->x<<"\n";

    delete ptr;

    return 0;
}