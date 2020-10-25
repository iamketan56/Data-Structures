#include<iostream>
using namespace std;
class node
{
    public:
int data;
node *link;
};
node * head;
node * createll(int );
node * reversell(node *);
node * display(node * );
int main()
{
    int n,position;
    cout<<"enter the number of node of in linked list";
    cin>>n;
    head=createll(n);
    head=reversell(head);
    display(head);
}
node * createll(int n)
{
    node *temp;
    int num,i;
    cout<<"enter the data for 1 node "<<endl;
    cin>>num;
    node * head=new node();
    head->data=num;
    head->link=NULL;
    temp=head;
    for(int i=2;i<=n;i++)
    {
        node * fnode=new node();
        cout<<"enter the data for"<<i<<"node"<<endl;
        cin>>num;
        fnode->data=num;
        fnode->link=NULL;
        temp->link=fnode;
        temp=temp->link;
    }
    return head;
}
node* reversell(node *)
{
     node *temp = NULL, *prev = NULL;
    while(head!=NULL)
    {
    temp = head->link;
    head->link = prev;
    prev= head;
    head = temp;
    }
return prev;
}
node * display(node *)
{
    cout<<head->data;
    cout<<"final list is :";

    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->link;
    }



}
