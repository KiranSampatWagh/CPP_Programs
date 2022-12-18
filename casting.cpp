#include<iostream>              //casing 
using namespace std;

class Base
{
    public:
        int A,B;

};

class Derived : public Base
{
    public:
        int X,Y;
};

int main()
{
    Base *bp =NULL;
    Derived *dp =NULL;

    Base bobj;
    Derived dobj;

    bp =&bobj;      //no casting            Allow
    dp =&dobj;      //no casting            Allow
    bp =&dobj;      //up casting            Allow
    // dp =&bobj;      //down casting          Not Allow

    return 0;
}