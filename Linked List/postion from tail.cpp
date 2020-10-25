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
void display(node *);
void positionfromtail(node *,int );
//* rotatedl(node *,int);
int main()
{
    int n,position;
    cout<<"enter the number of node of in linked list";
    cin>>n;
    head=createll(n);
    display(head);
    cout<<"enter the position from tail which u want "<<endl;
    cin>>position;
    positionfromtail(head,position);
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
        cout<<"enter the data for"<<i<<" "<<"node"<<endl;
        cin>>num;
        fnode->data=num;
        fnode->link=NULL;
        temp->link=fnode;
        temp=temp->link;
    }
    return head;
}
void positionfromtail(node * head,int position )
{
    node * h=head;
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->link;
    }
    //cout<<count;
    int t=0;
    while(h->link!=NULL)
          {
          if(t==count-position-1)
           {
           break;
            }
            h=h->link;
            t++;
          }
        cout<<h->data;
}
void display(node * head)
{
    while(head!=NULL)
    {
        cout<<"\n"<<head->data;
        head=head->link;
    }
}
