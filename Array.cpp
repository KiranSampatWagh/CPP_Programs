#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

        Array(int iLength =10)
        {
            cout<<"Inside the constructor\n";
            iSize =iLength;
            Arr =new int[iSize];
        }
        ~Array()
        {
            cout<<"Inside destructor\n";
            delete[]Arr;
        }
        void Accept()
        {
            cout<<"Enter the values \n";
            int i =0;

            for(i =0; i<iSize; i++)
            {
                cin>>Arr[i];
            }
        }
        void Display()
        {
            cout<<"Element of the array are :\n";
            int i =0;

            for(i =0; i<iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
        int Sumation()
        {
            int iSum =0,i =0;

            for(i =0; i<iSum; i++)
            {
                iSum =iSum + i;
            }
            return iSum;
        }
};

int main()
{
    cout<<"Inside main\n";
    int iRet =0;

    Array obj1(4);
    
    obj1.Accept();
    obj1.Display();   
    
    iRet =obj1.Sumation();

    cout<<"Sumation of all elements is :"<<iRet<<"\n";

    return 0;
}                  