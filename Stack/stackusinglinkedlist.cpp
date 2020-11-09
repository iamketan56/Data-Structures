#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node * next;
};
node * head;
node * top;
node * push(int x,node *p)
{
    node * newnode=new node();
    newnode->data=x;
    newnode->next=p;
    p=newnode;
    return p;
}
node * pop(node * p)
{
    node * q;
    cout<<p->data;
    q=p->next;
    delete p;
    return q;
}
int peek(int position)
{
    node * p=top;
    for(int i=0;i<position-1;i++)
    {
        p=p->next;
    }
    if(p!=NULL)
    return p->data;
    else
        return -1;
}
int main()
{
    int value,number;
   top=NULL;
cout<<"Enter the number of element to enter in stack"<<endl;
 cin>>number;
 int i=0;
while(i<number)
{
cout<<"enter the value"<<endl;
cin>>value;
top=push(value,top);
i++;
}
/*while(top!=NULL)
{
    top=pop(top);
}*/
cout<<peek(2);
}

