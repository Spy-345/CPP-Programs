#include<iostream>
using namespace std;

class Circle
{
    public:              //Accesses Specifier
        float Radius;    //Characteristics
        float PI;

        Circle()     //Default constructor
        {
            PI = 3.14;
            Radius = 0.0;
        }
        Circle(float A, float B)   //Prameterised Constructor
        {
            PI = A;
            Radius = B;

        }
        void Display()      //Concret Method
        {
            cout<<"Value of radius is :"<<Radius<<"\n";
        }
        virtual float Area() = 0;      //abstract method

        virtual float Circumferance() =  0;    //abstract method

};

class Marvellous : public Circle
{
    public:

        Marvellous() : Circle()  // <- Explicit call to default constructor of circle class
        {

        };
        Marvellous(float x, float y) : Circle(x,y) // <- Explicit call to parameterised constructor of circle class
        {

        };

        float Area()                //Concrete Method
        {
            float Ans = PI * Radius *Radius;

            return Ans;
        }

        float Circumferance()           //Concrete Method
        {
            float Ans = 0.0;
            Ans = 2 * PI * Radius;

            return Ans;
        }
};

int main()
{
    Marvellous mobj1;
    Marvellous mobj2(3.14f, 10.89);

    float fret = 0.0;

    fret = mobj2.Area();
    cout<<"Area is: "<<fret<<"\n";

    fret = mobj2.Circumferance();
    cout<<"Circumferance is : "<<fret<<"\n";


    return 0;
}