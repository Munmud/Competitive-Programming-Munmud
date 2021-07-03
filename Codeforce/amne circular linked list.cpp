#include<iostream>
#include <stdio.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
class CircularLinkedList
{
private:
   Node *head;
public:
    CircularLinkedList(int A[],int n);
    void display();
    void Rdisplay(Node *h);
    void Insert(int index,int x);
    int length();
    int Delete(int index);
};


int CircularLinkedList::length()
{
    int len=0;
    Node *p;
    p=head;
    while (p->next!=head)
    {
        len++;
        p=p->next;
    }
    return len+1;
}
CircularLinkedList::CircularLinkedList(int A[],int n)
{
    int i;
    Node *t,*last;
    head= new Node;
    head->data=A[0];
    head->next=head;
    last=head;

    for(i=1;i<n;i++)
    {
        t= new Node;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}
void CircularLinkedList::display()
{
    Node *h;
    h=head;
    do
    {
        printf ("%d ",h->data);
        h=h->next;
    }while (h!=head);
    printf ("\n");
}
void CircularLinkedList::Rdisplay(Node *h)
{
    static int flag=0;
    if (h!=head || flag==0)
    {
        flag=1;
        printf ("%d",h->data);
        CircularLinkedList::Rdisplay(h->next);
    }
    flag=0;
}

void CircularLinkedList::Insert(int index, int x)
{
    Node *t,*p;
    int i;
    p=head;
    if (index<0 || index>length())
        return;
    if (index==0)
    {
        t=new Node;
        t->data=x;
        if (head==NULL)
        {
            head=t;
            head->next=head;
        }
        else{
            while (p->next!=head)
                p=p->next;
            p->next=t;
            t->next=head;
            head=t;
        }
    }
    else{
        t=new Node;
        t->data=x;
        for (i=0;i<index-1;i++)p=p->next;
        t->next=p->next;
        p->next=t;
    }
}
int CircularLinkedList::Delete(int index)
{
    if (index<1 || index>length())
        return -1;
    int x,i;
    Node *p,*q;
    if (index==1)
    {
        p=head;
        while (p->next!=head)p=p->next;
        x=head->data;
        if (p==head)
        {
            delete head;
            head=NULL;
        }
        else{
            p->next=head->next;
            delete head;
            head=p->next;
        }
    }
    else
    {
        p=head;
        for (i=0;i<index-2;i++)
            p=p->next;
        q=p->next;
        x=q->data;
        p->next=q->next;
        delete q;
    }
    return x;
}

int main()
{
    int A[]={2,3,4,5,6};
    CircularLinkedList l(A,5);

    //l.Insert(4,7);
    l.display();
    //cout<<endl;
    cout<<l.Delete(5)<<endl;
    l.display();
}
