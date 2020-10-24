#include<iostream>
using namespace std;
class node
{
    public:
int data;
int item;
node *link;
};
fun(node *n,int item)
{
      while(n!=NULL && n->data>item)
 {
       n=n->link;
     if(n->data==item)
     {
        cout<<"element found at:"<<n<<endl;
        break;
     }

     else{
            cout<<"not found";

      n=n->link;
       break;
 }
}
}
int main()
 {

    int item;
    node *new_node=new node();
    node *head=new node();
    node *first=new node();
    node *second=new node();
    node *third=new node();
    node *fourth=new node();
    head->data=2;
    head->link=first;
    first->data=4;
    first->link=second;
    second->data=6;
    second->link=third;
    third->data=8;
    third->link=fourth;
    fourth->data=10;
    fourth->link=NULL;
    cout<<"enter the item u wanna search"<<endl;
    cin>>item;
        fun(head,item);
}
