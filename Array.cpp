#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

    Array(int iLength = 10)
    {
        cout<<"Inside Constructor\n";
        iSize = iLength;
        Arr = new int[iSize];
    }
    ~Array()
    {
        delete []Arr;
        cout<<"Inside Destructor\n";
    }

    void accept()
    {
        cout<<"Enter The  Values :\n";
        int i = 0;

        for (i=0;i<iSize;i++)
        {
            cin>>Arr[i];
        }
    }
    void Display()
    {
        cout<<"Elements of Array Are :\n";
        int i = 0;

        for(i = 0;i<iSize;i++)
        {
            cout<<Arr[i]<<"\n";
        }
        
    }
    int Summation()
    {
        int iSum = 0;
         for(int i = 0; i < iSize ; i++)
         {
            iSum = iSum + Arr[i];
         }
         return iSum;
    }
};

int main()
{
    cout<<"inside Main\n";
    int iRet = 0;
    Array obj1(4);
    obj1.accept();
    obj1.Display();

    iRet = obj1.Summation();

    cout<<"Sum of the elements of array :"<<iRet<<"\n";

    return 0;
}
