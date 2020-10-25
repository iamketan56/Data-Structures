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
void ispalindrom(node *);
int main()
{
    int n;
    cout<<"enter the number of node of in linked list";
    cin>>n;
    head=createll(n);
    ispalindrom(head);
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
void ispalindrom(node *)
{
    node *curr;
    curr=head;
    int a[50];
    int top=-1;
    node * beg;
    beg=head;
    int count=0;
    while(curr!=NULL)
    {
        count++;
        curr=curr->link;
    }
   // cout<<count;
    while(beg!=NULL)
    {
        top++;
        a[top]=beg->data;
        beg=beg->link;
    }
    int flag=0;
    while(head!=NULL)
    {
        if(head->data==a[top])
        {
           flag=flag+1;
        }
        head=head->link;
        top--;
    }
    if(flag==count)
    {
        cout<<"palindrom"<<endl;
    }
    else{
        cout<<"not palinrom"<<endl;
    }
}

