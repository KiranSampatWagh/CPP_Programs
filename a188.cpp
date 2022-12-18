#include<iostream>              //assignment no 18 q no 8  
using namespace std;

class Demo 
{
    private:
        static int x;
        static int y;
    public:
        Demo()
        {

        }
        void fun()
        {
            cout<<"inside fun \n";
            cout<<"value of x :"<<x<<"\n";
            cout<<"value of y :"<<y<<"\n";
        }

};
int Demo::x =11;
int Demo::y =12;

int main()
{
    Demo obj;
    obj.fun();
    return 0;
}