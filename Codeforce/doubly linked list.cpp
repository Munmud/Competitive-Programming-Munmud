#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;
};

class DoublyLinkedList
{
private:
    Node *first;
public:

    DoublyLinkedList(int A[],int n);
    void display();
    int length();
    void Insert(int index,int x);
};
void DoublyLinkedList::Insert(int index,int x)
{
    Node *p,*q,*t;
    if (index<0 ||index>length())
        return;
    p=first;
    q=NULL;
    if (index==0)
    {
        t=new Node;
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else if (index==length())
    {
        t=new Node;
        for (int i=1;i<=index-1;i++)
        {
            p=p->next;
        }
        t->data=x;
        p->next=t;
        t->prev=p;
        t->next=NULL;
    }
    else{
        for(int i=1;i<=index;i++)
        {
            q=p;
            p=p->next;
        }
        t=new Node;
        t->data=x;
        t->prev=q;
        t->next=p;
        q->next=t;
        p->prev=t;
    }


}
DoublyLinkedList::length()
{
    Node *p;
    p=first;
    int len=0;
    while (p)
    {
        len++;
        p=p->next;
    }
    return len;
}
DoublyLinkedList::DoublyLinkedList(int A[],int n)
{
        Node *t,*last;
        first=new Node;
        first->prev=NULL;
        first->data=A[0];
        first->next=NULL;
        last=first;

        for (int i=1;i<n;i++)
        {
            t=new Node;
            t->data=A[i];
            t->next=last->next;
            t->prev=last;
            last->next=t;
            last=t;
        }
    }
void DoublyLinkedList::display()
{
    Node *p;
    p=first;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    int A[]={10,20,30,40,50};
    DoublyLinkedList l(A,5);

    l.display();
    cout<<endl;
    l.Insert(5,5);
    l.display();
    cout<<endl<<l.length();
}
