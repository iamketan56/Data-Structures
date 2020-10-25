#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *link;
};
fun(node **head_ref)
{
  node *temp=*head_ref;
 while(temp->link!=*head_ref)
 {
     temp=temp->link;
 }
}
int main()
{  node **head_ref;
    node *temp=*head_ref;
    node *new_node=new node();
    node *head=new node();
    node *first=new node();
    node *second=new node();
    node *third=new node();
    node *fourth=new node();
    head->data=443;
    head->link=first;
    first->data=3444;
    first->link=second;
    second->data=323;
    second->link=third;
    third->data=423;
    third->link=fourth;
    fourth->data=523;
    fourth->link=temp;
    fun(&head);
   }
