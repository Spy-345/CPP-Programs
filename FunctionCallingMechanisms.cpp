#include<iostream>
using namespace std;
//Call by Value
void fun(int no)
{
    //int no = 10; <- Input from function call
    cout<<"Inside call by value :"<<no<<"\n";
    no++;
}

//Call By Address
void gun(int *ptr)
{
    //int *ptr = 200; <- Input from function call
    cout<<"Inside call by Address :"<<*ptr<<"\n";
    (*ptr)++;
}

//Call by Reference
void sun(int &ref)
{
    //&ref = k; <- Input from function call
    cout<<"Inside call by reference :"<<ref<<"\n";
    ref++;
}

int main()
{
    int i = 10;    //Add-100
    int j = 10;   //Add-200
    int k = 10;   //Add-300

    fun(i);      //internally call goes as-> fun(10)
    cout<<i<<"\n";
    gun(&j);     //internally call goes as-> gun(200)
    cout<<j<<"\n";
    sun(k);      //internally call goes as-> sun(k)
    cout<<k<<"\n";



    return 0;
}
