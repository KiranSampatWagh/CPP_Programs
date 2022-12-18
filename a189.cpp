#include<iostream>              //assignment no 18 q no 8  
using namespace std;

class Demo 
{
    private:
        int i;
        int j;
        static int k;
        
    public:
        Demo()
        {
            i =11;
            j =21;
        }
        void fun()
        {
            cout<<"inside fun \n";
            cout<<"value of i :"<<this->i<<"\n";
            cout<<"value of j :"<<this->j<<"\n";
            cout<<"value of k :"<<k<<"\n";
        }
        static void gun()
        {
            cout<<"inside gun \n";
            cout<<"value of k :"<<k<<"\n";
            //cout<<"value of i :"<<this->i<<"\n";        //error
        }
};
int Demo::k =100;

int main()
{
    //cout<<"value of k :"<<Demo::k<<"\n";
    Demo::gun();
    cout<<"inside main \n";
    Demo obj;
    cout<<"inside obj \n";
    obj.gun();
    obj.fun();

    return 0;
}