#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;

        Demo()
        {
          i = 21;
          j = 51;  

        };
        Demo(int a, int b)
        {
            i = a;
            j = b;
        } 
};

int main()
{
    Demo obj1;
    Demo obj2(10,20);

    const Demo obj3;
    const Demo obj4(10,20);
    obj1.i++;
    //obj3.i++;
    //obj4.i++;  //Not allowed
    

    return 0;
}