//Operator Overloading
#include<iostream>
using namespace std;

class Demo
{
    private:
        int a, b;
    public:   
        Demo(int i = 0, int j = 0)
        {
            a = i;
            b = j;
        }
        friend Demo operator +(Demo obj1, Demo obj2);
        friend Demo operator -(Demo obj1, Demo obj2);
        friend Demo operator *(Demo obj1, Demo obj2);
        void Display()
        {
            cout<<a<<"\n";
            cout<<b<<"\n";
        }
};
// + is an Operator overloaded function which accepts two parameters and both are objects of Demo class
//this function returns object of Demo class
Demo operator +(Demo obj1, Demo obj2)   // + operator overloading
{
    cout<<"inside + operator function\n";
    return Demo(obj1.a+obj2.a, obj1.b+obj2.b);
}
Demo operator -(Demo obj1, Demo obj2)     // - operator overloading
{
    cout<<"inside - operator function\n";
    int no1 = 0;
    int no2 = 0;

    no1 = obj1.a-obj2.a;
    no2 = obj1.b-obj2.b;

    return Demo(no1, no2);
}
Demo operator *(Demo obj1, Demo obj2)     // * operator overloading
{
    cout<<"inside * operator function\n";
    return Demo(obj1.a*obj2.a, obj1.b*obj2.b);
}

int main()
{

    Demo obj1(10, 20);
    Demo obj2(30, 40);
    Demo Ans(0, 0);

    Ans = obj1 + obj2;  //internally Considered as +(A, B) call to operator + function
    Ans.Display();      //internally function call Display(this *, &Ans)

    Ans = obj1 - obj2;  
    Ans.Display();    //internally function call Display(this *, &Ans)

    Ans = obj1 * obj2;
    Ans.Display();
    return 0;
}