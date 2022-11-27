#include<iostream>
using namespace std;

class Marvellous
{
    public:
    void fun();
    void gun();
};

class Demo
{   
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }
    friend class Marvellous;
};

void Marvellous::fun()    //Member Function of Marvellous Class
{
    Demo obj;

    cout<<"Value of i :"<<obj.i<<"\n";
    cout<<"Value of j :"<<obj.j<<"\n";
    cout<<"Value of k :"<<obj.k<<"\n";

}

void Marvellous::gun()    //Member Function of Marvellous Class
{
    Demo obj;

    cout<<"Value of i :"<<obj.i<<"\n";
    cout<<"Value of j :"<<obj.j<<"\n";
    cout<<"Value of k :"<<obj.k<<"\n";
}


int main()
{   
    Marvellous mobj;
    mobj.fun();
    mobj.gun();


    return 0;
}