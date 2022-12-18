#include<iostream>                  //virtual 
using namespace std;

class Base
{
    public:
        int A,B;
        void fun()                  //1000
        {
            cout<<"Base fun \n";
        }
        virtual void gun()          //2000
        {
            cout<<"Base gun \n";
        }        
        virtual void sun()          //3000
        {
            cout<<"Base sun \n";
        }
        virtual void run()          //4000
        {
            cout<<"Base run \n";
        }
};

class Derived : public Base
{
    public:
        int X,Y;
        void gun()                      //5000
        {
            cout<<"Derived gun \n";
        }
        virtual void run()              //6000
        {
            cout<<"Derived run \n";
        }
        virtual void mun()              //7000
        {
            cout<<"Derived mun \n";
        }        
};

int main()
{
    Base *bp =NULL;
    Derived dobj;
    bp =&dobj;                      //upcasting

    bp->fun();          //Base fun()
    bp->gun();          //Deri gun()
    bp->sun();          //Base sun()
    bp->run();          //Deri run()
    // bp->mun();       //error
    return 0;
}