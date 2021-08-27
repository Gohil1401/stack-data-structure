#include<iostream>
using namespace std;

class stack
{
public:

    int *st;
    int size;
    int top;

    stack()
    {
        size=10;
        top=-1;
        st=new int[size];
    }
    stack(int size)
    {
        this->size=size;
        top=-1;
        st=new int[this->size];
    }

    void push(int x);
    int pop();
    int peak(int pos);
    int stacktop();
    int isempty();
    int isfull();
    void display();
};

void stack::push(int x)
{
    if(isfull())
    {
        cout<<" stack is overflow !!!";
    }
    else
    {
        top++;
        st[top]=x;
    }
}

int stack::pop()
{
    int x=-1;
    if(isempty())
    {
        cout<<" stack is empty !!!";
    }
    else
    {
        x=st[top];
        top--;

    }
    return x;
}

int stack::peak(int pos)
{
    int x=-1;

    if(top-pos+1<0)
    {
        cout<<" Invalid index !!!";
    }
    else
    {
        x=st[top-pos+1];
    }
    return x;
}

int stack::stacktop()
{

    if(isempty())
    {
        return -1;
    }
    else
    {
        return st[top];
    }

}

int stack::isempty()
{
    return top==-1;
}

int stack::isfull()
{
    return top==size-1;
}

void stack::display()
{
    cout<<" stack is : "<<endl;
    for(int i=top;i>=0;i--)
    {
        cout<<st[i]<<endl;
    }
}

int main()
{
    stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.display();

    st.pop();
    st.display();
    cout<<endl;
    cout<<st.stacktop();
    cout<<endl;
    cout<<st.peak(2);
}
