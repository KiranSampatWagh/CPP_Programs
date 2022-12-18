#include<iostream>
using namespace std;

class Demo
{
    public:
        int x;
        int y;

        Demo()
        {
            cout<<"inside constructer"<<"\n";
        }
        ~Demo()
        {
            cout<<"inside distructor"<<"\n";
        }
        void fun()
        {
            cout<<"inside fun"<<"\n";
        }
};
int main()
{
    //Demo obj1;
    Demo *ptr =NULL;
    ptr =new Demo;
    ptr->fun();
    cout<<"value of x is :"<<ptr->x<<"\n";
    delete ptr;

    return 0;
}