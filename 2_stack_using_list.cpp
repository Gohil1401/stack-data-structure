#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
}*top=NULL;

class stack
{
public:

    void push(int x);
    int pop();
    int peak(int index);
    void display();
};

void stack::push(int x)
{
    node *t=new node;

    if(t==NULL)
    {
        cout<<" stack is full ";
    }
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }

}

int stack::pop()
{
    node *p;
    int x=-1;

    if(top==NULL)
    {
        cout<<"stack is empty ";
    }
    else
    {
        p=top;
        top=top->next;
        x=p->data;
        free(p);
    }
    return x;
}

int stack::peak(int index)
{
    node *p=top;

    for(int i=0;p!=NULL && i<index-1 ; i++)
    {
        p=p->next;
    }
    if(p!=NULL)
    {
        return p->data;
    }
    else
    {
        return -1;
    }
}

void stack::display()
{
    node *p=top;

    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    stack stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);

    stk.display();
    cout<<endl;
    cout<<stk.pop()<<endl;

    stk.display();

}
