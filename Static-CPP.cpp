#include<iostream>
using namespace std;
//Size of empty class is 1 byte;(just add on)

 // size of it's objects = Sum of all non-static characteristics
//sizeof(obj) = sizeof(i) + sizeof(j);
//sizeof(obj) = 4 + 4 = 8
class Demo  // 8 bytes
{
  public:      //Access Specifier
       int i; //Instance(object) variable
       int j; //Instance(object) variable
       static int k;  //Class Variable

    Demo()  //Default constructor
    {
        i = 0;
        j = 0;
    }

    Demo(int a, int b)  //Parameterised Constructor.
    {
        i = a;
        j = b;
    }

    //void fun(const Demo *this)
    void fun()   // Instance(object) or Non-static Method.
    //This function do not accept parameters as it gets address of caller object by 'this' pointer.
    {
        //Can Access Static + Non-static Data(like i,j and k)
        cout<<"Inside Fun\n";
        cout<<"value of i: "<<i<<"\n"; //10 or 20
        cout<<"value of j: "<<j<<"\n"; //11 or 21
        cout<<"value of k: "<<k<<"\n"; //
    }

    static void gun() //Class or Static Method.
    {
        //Can Access only Static Data(only k)
        cout<<"inside gun\n";
        cout<<"value of K: "<<k<<"\n";
    }

};
//Static variable of class should be initialised after the declaration of class.
//It should not be initialised in class.
//Memory for Static variables is allocated only once.There is no seperate memory allocation for static variables of class in each object of class.
//Because the static variable only concern with class.

//Load time Variables- Memory allocation at a time of loading .exe on RAM
int Demo::k = 0; //Initialisation of static variable of class Demo.

int main()
{
    cout<<"Inside main\n";
    cout<<"Value of k: "<<Demo::k<<"\n";  //0
    Demo::gun();  // Call Of Static Method of Class
    Demo obj1(10,11);  // address - 100
    Demo obj2(20,21);
    Demo obj;

    cout<<"value of i in obj1: "<<obj1.i<<"\n"; //10
    cout<<"value of i in obj2: "<<obj2.i<<"\n"; //20

    cout<<"value of j in obj1: "<<obj1.j<<"\n"; //11
    cout<<"value of j in obj2: "<<obj2.j<<"\n"; //21

    obj1.fun(); //Internaly call as- fun(&obj1)-> fun(100)// Call of Non-static Method
    obj2.fun(); //Internaly call as- fun(&obj2) 

    obj1.gun();    //internally considered as - Demo::gun();  

    return 0;
}

