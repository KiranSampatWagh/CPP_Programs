#include<iostream>
using namespace std;

#pragma pack()
struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class DoublyLL
{
    public:
        PNODE First;
        int iCount;

        DoublyLL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
};

DoublyLL :: DoublyLL()
{
    First = NULL;
    iCount = 0;
}

void DoublyLL :: InsertFirst(int No)
{
    PNODE newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
        iCount++;
    }
}

void DoublyLL :: InsertLast(int No)
{
    PNODE newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else
    {
        PNODE temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
        iCount++;
    }
}

void DoublyLL :: DeleteFirst()
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
        First->prev = NULL;
        delete(temp);
        iCount--;
    }
}

void DoublyLL :: DeleteLast()
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

void DoublyLL :: InsertAtPos(int No, int ipos)
{
    if((ipos < 1)||(ipos > iCount+1))
    {
        cout<<"Invalide Position \n";
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
        newn->prev = NULL;

        PNODE temp = First;
        
        int iCnt = 0;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        iCount++;
    }
}

void DoublyLL :: DeleteAtPos(int ipos)
{
    if((ipos < 1)||(ipos > iCount+1))
    {
        cout<<"Invalide Position \n";
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
        
        int iCnt = 0;
        
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        PNODE temp2 = temp1->next;

        temp1->next = temp2->next;
        delete(temp2);
        temp2->next->prev = temp1;
        iCount--;
    }
}

void DoublyLL :: Display()
{
    cout<<"Element of Linkedlist are:\n";
    PNODE temp = First;

    cout<<"NULL<=>";
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |<=>";
        temp = temp->next;
    }
    cout<<"NULL\n";
}


int main()
{
    DoublyLL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.Display();
    cout<<obj.iCount<<"\n";

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    
    obj.Display();
    cout<<obj.iCount<<"\n";
    
    obj.InsertAtPos(100, 4);
    
    obj.Display();
    cout<<obj.iCount<<"\n";

    obj.DeleteAtPos(4);
    
    obj.Display();
    cout<<obj.iCount<<"\n";

    obj.DeleteFirst();
    obj.DeleteLast();
    
    obj.Display();
    cout<<obj.iCount<<"\n";

    return 0;
}