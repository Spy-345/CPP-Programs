#include<iostream>
using namespace std;


class Maths     //Class Defination
{
   public:      //Access specifier

       int iNo1; //Characteristics
       int iNo2; //Characteristics


   Maths()     //Constructor(Default)
   {
     iNo1 = 0;
     iNo2 = 0;
   };

   Maths(int A, int B) //Constructor(Parametarised)
   {
     iNo1 = A;
     iNo2 = B;
   }
// Internally converted in c as, int Addition(Maths *this)
   int Addition()     //Behaviour
   {
     return iNo1 + iNo2;
   }
// Internally converted in c as, int Subtraction(Maths *this)
   int Substraction()  //Behaviour
   {
     return iNo1 - iNo2;
   }
};

int main()
{

   Maths mobj1;
   Maths mobj2(11, 10);
   int ret = 0;
   ret = mobj2.Addition();//internally converted in c as, ret = Addition(&mobj2)
   cout<<"Addition is: "<<ret<<"\n";

   ret = mobj1.Substraction();//internally converted in c as, ret = Substraction(&mobj1)
   cout<<"Substraction is: "<<ret<<"\n";

  return 0;
}
