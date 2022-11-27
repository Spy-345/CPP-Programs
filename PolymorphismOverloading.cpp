#include<iostream>
using namespace std;

class Overloading
{
    public:

    //

    //internally mangeled name given as add@2ii
    int add(int A, int B)   //1000-function add in text section
    {
        cout<<"Addition Of integers:\n";
        return A+B;
    };

    //internally mangeled name given as add@2ff
    float add(float A, float B)  //2000
    {
        cout<<"Addition of floats:\n";
        return A+B;
    };

    //internally mangeled name given as add@2dd
    double add(double A, double B)  //3000
    {
        cout<<"Addition of Doubles:\n";
        return A+B;
    };

    //internally mangeled name given as add@3iii
    int add(int A, int B, int C) //4000
    {
        cout<<"Addition of integers is:\n";
        return A+B+C;
    };

    //internally mangled as Fun@2if
    void Fun(int a, float b)
    {

    };

    //internally mangled as Fun@2fi
    void Fun(float x, int y)
    {

    };
};

int main()
{

    Overloading obj;
    int i;
    float f;
    double d;

    i = obj.add(10, 20);   //CALL(assembly lang word) 1000
    cout<<i<<"\n";
    i = obj.add(10, 20, 30); //CALL 4000
    cout<<i<<"\n";
    d = obj.add(10.3, 20.3); //CALL 3000
    cout<<d<<"\n";
    f = obj.add(23.40f, 34.9f); //CALL 2000
    cout<<f<<"\n";
    return 0;
};