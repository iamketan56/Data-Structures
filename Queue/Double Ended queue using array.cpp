
#include<iostream>
using namespace std;
class queue
{
    public:
    int rear;
    int front;
    int * q;
    int size;
};
queue obj;

int enqueue(int x)
{
    int b;
    cout<<"Enter the value to insert"<<endl;
    cin>>b;
    if(x==obj.size-1)
    {
        cout<<"Overflow"<<endl;
    }
    else{
            x++;
        obj.q[x]=b;
    }

    return x;
    }
void deque(int x)
{
    if(x==-1)
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        cout<<obj.q[x]<<endl;
    }
}
int main()
{
    int choice;
    cout<<"Implementation of Double ended queue(NOT FOLLOW FIFO FASHION)"<<endl;
    cout<<"1.Use front for enqueue and dequeue operation"<<endl;
    cout<<"2.Use Rear for enqueue and dequeue operation"<<endl;
    cin>>choice;
    switch( choice)
    {
    case 1:
    cout<<"Enter the number of element to add in queue"<<endl;
    cin>>obj.size;
    obj.q=new int[obj.size];
    obj.front=-1;
    for(int i=0;i<obj.size;i++)
    {
    obj.front=enqueue(obj.front);
    }
    int n;
        cout<<"Enter the element to dequeue"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    deque(obj.front);
   obj.front--;
    }
    break;
    case 2:
         cout<<"Enter the number of element to add in queue"<<endl;
    cin>>obj.size;
    obj.q=new int[obj.size];
    obj.rear=-1;
    for(int i=0;i<obj.size;i++)
    {
    obj.rear=enqueue(obj.rear);
    }
    cout<<"rear:"<<obj.rear;
        cout<<"Enter the element to dequeue"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        deque(obj.rear);
        obj.rear--;
    }
    break;
    default:
        cout<<"Choose correct";
    }

}
