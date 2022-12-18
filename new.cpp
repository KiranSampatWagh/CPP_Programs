#include<iosteam>
using namespace std;

int main()
{
    int *p =NULL;

    p =new int [10];
        //p =(int*)malloc(10*sizeof(int));

    //use the memory

    delete []p;
        //free(P);

    return 0;

}