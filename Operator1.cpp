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

    Demo obj1;
    Demo obj2(11);
    Demo obj3(11,21); //All Above Objects Will Call Demo() Constructor.

    return 0;
}