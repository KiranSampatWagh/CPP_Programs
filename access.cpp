#include<iostream>          //access specifier
using namespace std;

class Base
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Base()
        {
            i =10;
            j =20;
            k =30;
        }
        void fun()
        {
            cout<<"value of public i :"<<i<<"\n";
            cout<<"value of private j :"<<j<<"\n";
            cout<<"value of protected k :"<<k<<"\n";
        }
};

int main()
{
    Base bobj;
    
    cout<<"value of public i :"<<bobj.i<<"\n";
    cout<<"value of private j :"<<bobj.j<<"\n";
    cout<<"value of protected k :"<<bobj.k<<"\n";

    return 0;
}