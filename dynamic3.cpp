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
   
    Demo *ptr =NULL;

    ptr =(Demo *) malloc(sizeof(Demo));

        //ptr = new Demo;

    ptr->fun();
    
    free(ptr);

        //delete ptr;

    return 0;
}