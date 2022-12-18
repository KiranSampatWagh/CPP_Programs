#include<iostream>      //multiple inheritance
using namespace std;

class Base1             //4
{
    public:
        int A;

        Base1()
        {
            cout<<"inside Base1 constructer\n";
        }
        ~Base1()
        {
            cout<<"inside Base1 distructer\n";
        }
        void fun()
        {
            cout<<"inside Base1 fun\n";
        }
};

class Base2             //12
{
    public:
        int I,J,K;

        Base2()
        {
            cout<<"inside Base2 constructer\n";
        }
        ~Base2()
        {
            cout<<"inside Base2 distructer\n";
        }
        void gun()
        {
            cout<<"inside Base2 gun\n";
        }
};

class Derived : public Base1, public Base2          //24
{
    public:
        int X,Y;
        Derived()
        {
            cout<<"inside Derived constructer\n";
        }
        ~Derived()
        {
            cout<<"inside Derived distructer\n";
        }
        void sun()
        {
            cout<<"inside Derived sun\n";
        }
};

int main()
{
    Derived dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();

    return 0;
}