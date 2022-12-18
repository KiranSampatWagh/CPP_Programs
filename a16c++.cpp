#include<iostream>
using namespace std;

class Maximumnumber
{
    public:
        int ino1;
        int ino2;

        Maximumnumber()
        {
            ino1 =0;
            ino2 =0;
        }
        void Maximumnumber (int ino1, int ino2)
        {
            if(ino1>ino2)
            {
                cout<<"max no is:"<<ino1<<"\n";
            }
            else
            {
                cout<<"max no is:"<<ino2<<"\n";
            }
        }
};

int main()
{
    int ivalue1 =0;
    int ivalue2 =0;

    cout<<"enter first no:\n";
    cin>>ivalue1;

    cout<<"enter second no:\n";
    cin>>ivalue2;

    Maximumnumber obj;
    obj.Maximumnumber(ivalue1,ivalue2);

    return 0;
}