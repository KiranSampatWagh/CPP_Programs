#include<iostream>      //function calling machanisams
using namespace std;

void fun(int no)      //call by value
{
    cout<<"inside call by value:"<<no<<"\n";
    no++;
}
void gun(int *p)      //call by addres
{
    cout<<"inside call by address:"<<*p<<"\n";
    (*p)++;
}
void sun(int &ref)      //call by referance
{
    cout<<"inside call by referance:"<<ref<<"\n";
    ref++;
}

int main()
{
    int i =10;
    int j =10;
    int k =10;

    fun(i);     //fun(10);
    cout<<i<<"\n";
    gun(&j);    //gun(200);
    cout<<j<<"\n";
    sun(k);     //sun(K);
    cout<<k<<"\n";

    return 0;
}