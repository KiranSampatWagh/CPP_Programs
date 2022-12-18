#include<iostream>          //multilevel inheritance
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
            cout<<"inside fun of Base\n";
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

class Derivedx : public Derived
{
    public:
        int i,j;

        Derivedx()
        {
            cout<<"insiade derivedx constructer\n";
        }
        ~Derivedx()
        {
            cout<<"inside derivedx distructer\n";
        }
        void sun()
        {
            cout<<"inside sun of derivedx \n";
        }
};

int main()
{  
    cout<<"size of Base :"<<sizeof(Base)<<"\n";
    cout<<"size of Derived :"<<sizeof(Derived)<<"\n";
    cout<<"size of Derivedx :"<<sizeof(Derivedx)<<"\n";
    
    Derivedx dobj;          //static memory allocation

    dobj.fun();
    dobj.gun();
    dobj.sun();

    
    return 0;
} 