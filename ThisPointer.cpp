#include<iostream>
using namespace std;

class demo
{
    public:
        int i;
        float f;
        double d;
    //Internally - void fun(const demo *this, int A) = 'this' pointer is gets added 
    //at first place in parameters after compilation.
    demo()
    {
        cout<<"inside Constructor\n";
        // this->gun(10);
    }

    void fun(int A)
    {
        cout<<"Inside Fun\n";
        cout<<this->i<<"\n";
    };
    //Internally - void gun(const demo *this, int A, int B)
    void gun(int A, int B)
    {
        cout<<"Inside gun\n";
    };

};
int main()
{
    demo obj1;  //address - 100
    // demo obj2;  //address - 200

    obj1.i = 101;
    // obj2.i = 201;
   // obj1.fun(11);  //function call internally = fun(&obj1,11) -> fun(100, 11)
    //obj2.fun(11);  //function call internally = fun(&obj2,11) -> fun(200, 11)
}
