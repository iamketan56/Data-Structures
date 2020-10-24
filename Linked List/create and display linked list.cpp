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
node * moveallzero(node * );
node * deleteAlt(node *);
void display(node *);
//* rotatedl(node *,int);
int main()
{
    int n,t;
    cout<<"enter the number of node of in linked list";
    cin>>n;
    head=createll(n);
  //  cout<<"enter the value of rotation"<<endl;
    //cin>>t;
  //  head=rotatedl(head,t);
  //head=moveallzero(head);
  deleteAlt(head);
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
        cout<<"enter the data for"<<i<<" "<<"node"<<endl;
        cin>>num;
        fnode->data=num;
        fnode->link=NULL;
        temp->link=fnode;
        temp=temp->link;
    }
    return head;
}
void display(node * head)
{
    while(head!=NULL)
    {
        cout<<"\n"<<head->data;
        head=head->link;
    }
}
node * rotatedl(node * head,int t)
{
        node * h,*hn;
      while(head!=NULL && t>=1)
        {
            h=head;
            hn=head->link;
//cout<<head->data;
      while(h->link!=NULL)
        {//cout<<h->link<<endl;
            h=h->link;
        }
          //cout<<h->data;
        h->link=head;
        head->link=NULL;
        head=hn;
       // cout<<head->data;
        t--;
    }
   // cout<<head->data;
    return head;
}
node * moveallzero(node * head)
{
    node * h,*n,*prev;
    h=head;

    //cout<<head->data;
 while(h->link!=NULL)
 {       n=h;
  //  cout<<n->data;
     if(n->data==0)
     {
        prev=n;
        prev->link=n->link;
       n->link=head;
       head=n;
        //cout<<n->data;
        //break;
     }
     h=h->link;
 }
 //cout<<h->data;
 return n;
}
node * deleteAlt(node *head)
{
   // struct node *h;
        node *h;
      while(head->link!=NULL)
        {
            if(head->link->link!=NULL)
            {
              h=head->link;
            head->link=h->link;
            head=head->link;
            }
            else
            {
                head->link=NULL;
            }
        }
        return head;
}
