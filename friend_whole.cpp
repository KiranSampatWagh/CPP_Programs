#include<iostream>               //whole class friend 
using namespace std;

class Marvellous                 //whole class friend   
{
    public:
        void fun();              //member function
        void gun();              //member function       
};

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Demo()     
        {
            i =10;
            j =20;
            k =30;
        }
    friend class Marvellous;
};

void Marvellous::fun()           //member function   
{
    Demo obj;
    cout<<"value of fun i:"<<obj.i<<"\n";
    cout<<"value of fun j:"<<obj.j<<"\n";
    cout<<"value of fun k:"<<obj.k<<"\n";
}   

void Marvellous::gun()           //member function   
{
    Demo obj;
    cout<<"value of gun i:"<<obj.i<<"\n";
    cout<<"value of gun j:"<<obj.j<<"\n";
    cout<<"value of gun k:"<<obj.k<<"\n";
}    

int main()
{
    Marvellous mobj;
    mobj.fun();
    mobj.gun();
    return 0;
}