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
void insertatbeg(node *);
void inseratend(node *);
void insertatpsotion(int,node *);
void display(node * );
int main()
{
    int n,position;
    cout<<"enter the number of node of in linked list";
    cin>>n;
    head=createll(n);
    insertatbeg(head);
    cout<<"enter the position at which u wanna insert"<<endl;
    cin>>position;
    insertatpsotion(position,head);
    inseratend(head);
    display(head );

//    display();
}
 node *createll(int n)
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

     cout<<"list is:"<<endl;
     return head;
}
void insertatbeg(node *)
    {
        int value;
        cout<<"enter the value to insert at beg."<<endl;
        cin>>value;
        node * new_node=new node();
        new_node->data=value;
        new_node->link=head;
        head=new_node;
        //return head;
    }
void inseratend(node *head)
{
    int value;
    node * new_node=new node();
    cout<<"enter the value to insert at end"<<endl;
    cin>>value;
    while(head->link!=NULL)
    {
        head=head->link;
    }
    new_node->data=value;
    new_node->link=NULL;
    head->link=new_node;

}
void insertatpsotion(int position,node * head)
{
    int counter=1;
    while(head!=NULL && (counter!=position))
    {
         counter++;
        head=head->link;
        }
            int value;
            node * new_node=new node();
            cout<<"enter the value"<<endl;
            cin>>value;
            new_node->data=value;
            new_node->link=head->link;
            head->link=new_node;
    }
void display(node * head)
{
    cout<<"final list is :";
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->link;
    }
}
