//Operator Overloading
#include<iostream>
using namespace std;

class Demo
{
    public:
        int a, b;
        
        Demo(int i = 0, int j = 0)
        {
            a = i;
            b = j;
        }
};

int main()
{

    Demo A(10, 20);
    Demo B(30, 40);
    Demo Ans(0, 0);

    Ans = A + B;  //Not Allowed, Because we can't add two objects in each other.

    return 0;
}