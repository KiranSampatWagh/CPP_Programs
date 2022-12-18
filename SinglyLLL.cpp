#include<iostream>
using namespace std; 

#pragma pack(1)
struct node 
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

class SinglyLL
{
    public:
        PNODE First;
        int iCount; 

        SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
};

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int No)
{
    PNODE newn = new NODE;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else
    {
        newn->next = First;
        First = newn;
        iCount++;
    }
}

void SinglyLL :: InsertLast(int No)
{
    PNODE newn = new NODE;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else
    {
        PNODE temp =First;
        
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        iCount++;
    }
}

void SinglyLL :: InsertAtPos(int No, int ipos)
{
    if((ipos < 1)||(ipos > iCount+1))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(No);
    }
    else if(ipos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        PNODE newn = new NODE;

        newn->data = No;
        newn->next = NULL;

        PNODE temp = First;

        int iCnt = 0;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }

}

void SinglyLL :: DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete(First);
        First = NULL;
        iCount--;
    }
    else
    {
        PNODE temp = First;

        First = temp->next;
        delete(temp);
        iCount--;
    }
}

void SinglyLL :: DeleteLast()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete(First);
        First = NULL;
        iCount--;
    }
    else
    {
        PNODE temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete(temp->next);
        temp->next = NULL;
        iCount--;
    }
}

void SinglyLL :: DeleteAtPos(int ipos)
{
    if((ipos < 1)||(ipos > iCount+1))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp1 = First;

        int iCnt = 0 ;
        for(iCnt =1; iCnt < ipos-1; iCnt++)
        {
            temp1 =temp1->next;
        }
        PNODE temp2 = temp1->next;

        temp1->next = temp2->next;
        delete(temp2);
        iCount--;
    }
}

void SinglyLL :: Display()
{
    cout<<"Element of Linked List are:"<<"\n";
    PNODE temp = First;
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

int main()
{
    SinglyLL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    cout<<obj.iCount<<"\n";

    obj.InsertLast(101);
    obj.InsertLast(111);

    obj.Display();
    cout<<obj.iCount<<"\n";

    obj.InsertAtPos(100, 4);

    obj.Display();
    cout<<obj.iCount<<"\n";

    obj.DeleteAtPos(4);

    obj.Display();
    cout<<obj.iCount<<"\n";

    obj.DeleteFirst();

    obj.Display();
    cout<<obj.iCount<<"\n";

    obj.DeleteLast();

    obj.Display();
    cout<<obj.iCount<<"\n";

    return 0;
}