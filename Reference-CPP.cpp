#include<iostream>
using namespace std;

int main()
{
    int no = 11;

    int &x = no; //x is considered as reference of integer no.
    int &y = no; //y is considered as reference of integer no.

    int *p = &no;
    int &q = *p;
    cout<<"value of &no pointer :"<<&no<<"\n";
    cout<<"value of p pointer :"<<p<<"\n";

    double d = 90.9;

    double &a = d; //a is considered as reference of integer d.
    double &b = d; //b is considered as reference of integer d.

    return 0;
}