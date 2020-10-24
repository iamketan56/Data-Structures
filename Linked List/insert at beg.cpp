#include<iostream>
using namespace std;
class node
{
    public:
int data;
node *link;
};
fun(node *n)
{
 while(n!=NULL)
 {
     cout<<n->data<<endl;
     n=n->link;
 }
}
void insertbeg(node **head,int new_data)
{
    node *new_node=new node();
    new_node->data=new_data;
    new_node->link=(*head);
    *head = new_node;
}
void insertafter(node *second,int new_data)
{
    node *new_node=new node();
    new_node->data=new_data;
    new_node->link=second->link;
    second->link=new_node;
}
void insertend(node **head,int new_data)
{
    node *new_node=new node();
    node *fourth=* head;
    new_node->data=new_data;
    new_node->link=NULL;
    if(*head==NULL)
    {
    *head=new_node;
    return;
    }
    while(fourth->link!=NULL)
        fourth=fourth->link;
    fourth->link=new_node;
    return;
}

int main()
{
    node *new_node=new node();
    node *head=new node();
    node *first=new node();
    node *second=new node();
    node *third=new node();
    node *fourth=new node();
    head->data=1;
    head->link=first;
    first->data=2;
    first->link=second;
    second->data=3;
    second->link=third;
    third->data=4;
    third->link=fourth;
    fourth->data=5;
    fourth->link=NULL;
    insertbeg(&head,10);
    insertafter(head->link,6);
    insertend(&head,9);
    fun(head);
}
