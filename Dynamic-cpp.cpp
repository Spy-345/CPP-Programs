#include<iostream>
using namespace std;

int main()
{
    int *p = NULL;

    p = new int[10]; //internally in c - p = (int *)malloc(sizeof(int) * 10).

    //Syntax variations
    p = new int; // allocates memory for single integer.

    int *q = NULL;

    q = new int(5);  // allocates memory for single integer and initialise with value (5).

    int *x = NULL;

    x = new int[5]; //allocates the memory for 5 elements continuosly i.e. array.
    cout<<x<<"\n";
    cout<<x[2]<<"\n";
    cout<<p<<"\n";

    //Use the memory

    delete p;  // internally in c - free(p);
    delete q;
    delete []x; //For array have to mention '[]' brackets before name of array for deallocate the memory.

    return 0;
}