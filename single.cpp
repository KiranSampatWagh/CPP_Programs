#include<iostream>      //single inheritance
using namespace std;

class Base
{
    public:
        int A,B;

        Base()
        {
            cout<<"inside base constructor\n";
        }
        ~Base()
        {
            cout<<"inside base destructor\n";
        }
        void fun()
        {
            cout<<"inside base fun\n";
        }
};

class Derived : public Base
{
    public:
        int X,Y;

        Derived()
        {
            cout<<"insiade derived constructer\n";
        }
        ~Derived()
        {
            cout<<"inside derived distructer\n";
        }
        void gun()
        {
            cout<<"inside gun of derived \n";
        }
};

int main()
{
    //Derived obj;          //static memory allocation
    Derived * ptr =NULL;

    ptr = new Derived;      //dynamic memory allocation

    ptr ->fun();
    ptr ->gun();

    delete ptr;

    return 0;
} 