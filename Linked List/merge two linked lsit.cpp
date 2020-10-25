#include<iostream>
using namespace std;

class node
{
    public:
int data;
node *link;
};
node *head, *head1,*head2;
node * createll(int );
//node * moveallzero(node * );
//node * deleteAlt(node *);
void display(node *);
node * mergell(node *, node *);
//* rotatedl(node *,int);
int main()
{
    int n,m,t;
    cout<<"enter the number of node of in 1st linked list"<<endl;
    cin>>n;
    head1=createll(n);
   // display(head1);
    cout<<"\nenter the number of node of in 2nd linked list";
    cin>>m;
    head2=createll(m);
   // display(head2);
    head=mergell(head1,head2);
    display(head);
  //  cout<<"enter the value of rotation"<<endl;
    //cin>>t;
  //  head=rotatedl(head,t);
  //head=moveallzero(head);
  //deleteAlt(head);

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
    cout<<"list is"<<endl;
    while(head!=NULL)
    {
        cout<<"\n"<<head->data;
        head=head->link;
    }
}
node * mergell(node * head1,node * head2)
{
    node *h1,*h2,*h,*prev;
    h1=head1;
    h2=head2;
    h=head1;
    while((head1!=NULL) || (head2!=NULL))
    {
            h1=head1;
            h2=head2;
        if(h1->data < h2->data)
        {
            if(h1->link==NULL)
            {
                h1->link=h2;
                h2->link=NULL;
            }
           head1=head1->link;
        }
        if(h2->data<h1->data)
        {
            prev=h1;
            //cout<<"\ni am ketan sharma";
            h2->link=h1;
            prev->link=h2;
            head2=head2->link;
           // cout<<"\ni am ketan sharma";
        }
    }
    return h;
}
