#include<iostream>
using namespace std;

class Overloading
{
    public:
            //Add@2ii
        int Add(int a, int b)
        {
            cout<<"Addition of 2 Integers\n";       //1000
            return a+b;
        }
            //Add@2ff
        float Add(float a, float b)
        {
            cout<<"Addition is float\n";            //2000
            return a+b;
        }
            //Add@2dd
        double Add(double a, double b)
        {
            cout<<"Addition is double\n";           //3000
            return a+b;
        }
            //Add@3iii
        int Add(int a, int b, int c)
        {
            cout<<"Addition is 3 integer\n";        //4000
            return a+b+c;
        }
            //fun@2if
        void fun(int a, float b)
        {}
            //fun@2fi
        void fun(float x, int y)
        {}
};

int main()
{
    Overloading obj;
    int i;
    float f;
    double d;

    i =obj.Add(11,21);         //call 1000
    cout<<i<<"\n";
    
    i =obj.Add(11,21,51);      //call 4000
    cout<<i<<"\n";

    f =obj.Add(10.9f,89.5f);     //call 2000
    cout<<f<<"\n";

    d =obj.Add(10.9,89.5);    //call 3000
    cout<<d<<"\n";

    return 0;
}