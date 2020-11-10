#include<iostream>
using namespace std;
class node
{
    public:
 int data;
 node * next;

};
node * front=NULL;
 node * rear=NULL;
void enqueue()
{
    int value;
    cout<<"Enter the value"<<endl;
    cin>>value;
    node * newnode=new node();
    newnode->data=value;
    if(newnode==NULL)
        cout<<"Overflow";
    else
    {
    if(front==NULL)
        front=rear=newnode;
    else
        rear->next=newnode;
        rear=newnode;
}
}
node * deque(node * front)
{
    node *p;
    int x=-1;
        if(front==NULL)
        {

            cout<<"Empty"<<endl;
            return 0;
        }
        else
        {


            p=front;
            cout<<p->data<<endl;
        front=front->next;
            delete(p);

    return front;
        }
}
int main()
{

    int number;
    cout<<"Enter the number of element to add in queue"<<endl;
    cin>>number;
    for(int i=0;i<number;i++)
    {
        enqueue();
    }
    cout<<"Enter the element to dequeue"<<endl;
    cin>>number;
    for(int i=0;i<number;i++)
    {
     front=deque(front);
    }
}
