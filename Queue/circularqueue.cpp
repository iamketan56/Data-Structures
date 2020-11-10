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
void enqueue()
{
    int x;
    cout<<"Enter the value to insert"<<endl;
    cin>>x;
    if((obj.rear+1)%obj.size==obj.front)
    {
        cout<<"Overflow"<<endl;
    }
    else{
            obj.rear=(obj.rear+1)%obj.size;
        obj.q[obj.rear]=x;
    }
}
int deque()
{

    int a;
    if(obj.rear==obj.front)
    {
        cout<<"Empty"<<endl;
        return 0;}
    else
    {
          obj.front=(obj.front+1)%obj.size;
        a=obj.q[obj.front];
        return a;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of element to add in queue"<<endl;
    cin>>obj.size;
    obj.q=new int[obj.size];
    obj.rear=-1;
    obj.front=-1;

    for(int i=0;i<obj.size;i++)
    {
    enqueue();
    }
    cout<<"Enter the element to dequeue"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cout<<deque()<<endl;
    }
    enqueue();
    enqueue();
    while(obj.front!=obj.rear)
    {
       cout<<deque();
    }
}
