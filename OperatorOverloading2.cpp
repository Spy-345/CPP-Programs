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

Demo operator + (Demo obj1, Demo obj2)    //Operator Overloading function of + operator, Which accepts two Demo objects as parameters
{
    cout<<"Inside + operator function\n";
    return Demo(obj1.a+obj2.a, obj1.b+obj2.b);
}
Demo operator - (Demo obj1, Demo obj2)    //Operator Overloading function of - operator, Which accepts two Demo objects as parameters
{
    cout<<"Inside - operator function\n";
    return Demo(obj1.a-obj2.a, obj1.b-obj2.b);
}
int main()
{
    Demo A(10, 20);
    Demo B(30, 40);
    Demo Ans(0, 0);

    Ans = A + B;  //internally Considered as +(A, B)

    cout<<Ans.a<<"\n";
    cout<<Ans.b<<"\n";

    Ans = A - B;
    cout<<Ans.a<<"\n";
    cout<<Ans.b<<"\n";

    return 0;
}