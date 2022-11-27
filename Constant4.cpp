#include<iostream>
using namespace std;

class Demo
{
    public:
        int i, j;

    Demo(int x = 10, int y = 20)
    {
        i = x;
        j = y;
    }
    void fun()
    {
        i++;
        j++;
    }
    void gun() const  //it can not modify the contents(characteristics of object) inside it.
    {
        i++;  //Generates Error
        j++;  //Generates Error
    }
};


int main()
{
    Demo obj1;
    Demo obj2(11);
    Demo obj3(11, 21);
    obj3.fun();
    obj3.gun();   

    return 0;
}