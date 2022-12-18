#include<iostream>              //run time polymorphism
using namespace std;

class Base
{
    public:                         //access
        int A,B;
        void fun()                  //function defination
        {
            cout<<"Base fun \n";
        }
        void gun(int i)             //function defination
        {
            cout<<"Base gun 1 \n";
        }
        void gun(int i,int j)       //overloaded function defination
        {
            cout<<"Base gun 2 \n";
        }    
        
};

class Derived : public Base
{
    public:
        int X,Y;
        void sun()                  //function defination
        {
            cout<<"Derived sun \n";
        }
        void fun()                  //function redefination
        {
            cout<<"Derived fun \n";
        }
};

int main()
{
    Derived dobj;

    dobj.fun();
    dobj.gun(11);
    dobj.gun(11,21);
    dobj.sun();
    
    return 0;
}