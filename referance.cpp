#include<iostream>
using namespace std;

int main()
{
    int no =11;         //first variable

    int &x =no;         //referance of first variable

    int *p =&no;        //pointer of first variable

    double d =90.9;     //second variable
    
    double &y =d;       //referance of second variable
    
    double &z =d;       //referance of second variable

    int &a =no;         //referance of first variable

    return 0;
}