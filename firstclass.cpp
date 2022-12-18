#include<iostream>
using namespace std;
    //class decleration
class Maths                 
{
    public:                            //access specifer        
        int iNo1;                      //chacteritcs            } memory gets allocated seperatelly
        int iNo2;                      //chacteritcs            }        for each charcteritcs

    Maths()                     //     //constructor (default)
    {                           //
        cout<<"inside default constructor\n";
        iNo1 =0;                //
        iNo2 =0;                //
    }                           //
                                
    Maths (int A, int B)        //     //constructor (parametrised)
    {                           //  
        cout<<"inside parametrised constructor\n";
        iNo1 =A;                //
        iNo2 =B;                //} commen memory allocated at text section 
    }                           //

    ~Maths()                    //     //destructor
    {                           //
         cout<<"inside destructor\n";
    }                           //
    //int addition(Maths*this)
    int Addition()              //      //behaviour           
    {                           //
        return iNo1 + iNo2;     //
    }                           //
    //int substraction(Maths*this)                            
    int Substraction()          //      //behaviour
    {                           //

        return iNo1 - iNo2;     //
    }                           //                                
};                              //

int main()
{
    cout<<"inside main function\n";
    
    Maths mobj1;
    Maths mobj2(11,10);
    int ret =0;

    ret = mobj2.Addition(); //ret =Addition(&mobj2);
    //ret =Addition(200);
    cout<<"Addition is :"<<ret<<"\n";

    ret = mobj1.Addition(); //ret =substraction(&mobj1);
    //ret =substraction(100);
    cout<<"Addition is :"<<ret<<"\n";

    return 0;
}