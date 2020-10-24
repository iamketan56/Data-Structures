#include<iostream>
using namespace std;
class node
{
    public:
int data;
node *link;
};
void fun(node *n)
{
cout<<"our list is:"<<endl;
 while(n!=NULL)
 {
     cout<<n->data<<endl;
     n=n->link;
 }
}
void fun(int item,node **hd)
{
    node *temp=*hd;
    node *p;

    while(temp->data!=item )
    {
       p=temp;
       p->link=temp->link;
       delete(temp);
    }
    }
int main()
 { int item;
    node *head=new node();
    node *first=new node();
    node *second=new node();
    node *third=new node();
    node *fourth=new node();
    head->data=6;
    head->link=first;
    first->data=4;
    first->link=second;
    second->data=2;
    second->link=third;
    third->data=9;
    third->link=fourth;
    fourth->data=15;
    fourth->link=NULL;
    fun(head);
    cout<<"enter the element want to delete from list"<<endl;
    cin>>item;
    fun(item,&head);
    fun(head);
}
