#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        const int k;
        const int l;  //Costatnt characteristics

        Demo():k(11), l(21) //Initialisation of k & l  is just after Memory allocation, and before going inside constructor. 
        {
          i = 51;
          j = 101;  

        };
        Demo(int a, int b, int c, int d):k(c), l(d) //Parameterised constructor
        {
            i = a;
            j = b;
        } 
};


int main()
{
    const int i = 10; //Constant variable
    Demo obj1;
    Demo obj2(10,20,30,40);
    //obj1.k++;//NA
    //obj2.k++;//NA
    obj1.i++;
    obj2.i++;

    return 0;
}