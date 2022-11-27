#include<iostream>  //Class for std namespace file is declared in this iostream file
//using namespace std;  <- std is object of that class.
namespace Marvellous
{
    class Demo
    {
        public:
            int i,j;

            void fun()
            {
                std::cout<<"Inside fun from Demo of Marvellous\n";  //Accesing cout function from std namespace.
            }

    };
    class Hello
    {
        public:
            int x,y;
    };

}

namespace Infosystems
{
    class Demo
    {
        public:
            int a, b;

            void fun()
            {
                std::cout<<"Inside fun from Demo of Infosystems\n";
            }
    };
}
int main()
{
    Marvellous::Demo obj1;  //Full Qualified Name
    obj1.fun();
    Infosystems::Demo obj2;
    obj2.fun();

    using namespace Marvellous;  //By loading the namespace
    return 0;
}