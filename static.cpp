#include<iostream>
using namespace std;

class Demo
{
    public:                 //access specifier
        int i;              //instance variable
        int j;              //instance variable
        static int k;       //class variable
        static int l;       //class variable

    Demo()                  //default constructor
    {
        i =0;
        j =0;
    }

    Demo(int A,int B)        //parametrised constructor
    {
        i =A;
        j =B;
    }
                             //void fun(const Demo*this)
    void fun()               //instance method
    {
                             //static + non static
        cout<<"inside non static method fun\n";
        cout<<"value of i : "<<this->i<<"\n";
        cout<<"value of j : "<<this->j<<"\n";
        cout<<"value of k : "<<k<<"\n";
        cout<<"value of l : "<<l<<"\n";        
    }
    //
    static void gun()        //class method
    {
                             //static
        cout<<"inside static method gun\n";
        cout<<"value of k : "<<k<<"\n";
        cout<<"value of l : "<<l<<"\n";
    }
};
                            //load time variables
int Demo::k =0;
int Demo::l =0;

int main()
{
    cout<<"inside main\n";
    cout<<"value of k is:"<<Demo::k<<"\n";              //0
    cout<<"value of l is:"<<Demo::l<<"\n";              //0

    Demo::gun();
    Demo obj1(10,11);
    Demo obj2(20,21);
    Demo obj3;

    cout<<"value of i in obj1 : "<<obj1.i<<"\n";        //10
    cout<<"value of i in obj2 : "<<obj2.i<<"\n";        //20

    cout<<"value of j in obj1 : "<<obj1.j<<"\n";        //11
    cout<<"value of j in obj2 : "<<obj2.j<<"\n";        //21

    obj1.fun();          //fun(obj1);
    obj2.fun();          //fun(obj2);

    obj1.gun();          //Demo::gun;

    return 0;
}