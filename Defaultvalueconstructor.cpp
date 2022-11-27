 #include<iostream>
using namespace std;

class Demo
{
    public:
        int i, j;
    //Parameterised Constructor with DEFAULT values.
    Demo(int x = 10, int y = 20)
    {
        i = x;
        j = y;

    }
};

int main()
{
    Demo obj1;
    Demo obj2(11);
    Demo obj3(12, 21);//For All These three objects single constructor will get called.
    
    cout<<obj1.i<<"\n";  //10
    cout<<obj2.i<<"\n";  //11
    cout<<obj3.i<<"\n";  //12

    return 0;
}