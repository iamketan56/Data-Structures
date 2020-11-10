#include<iostream>
using namespace std;
class stackk
{
    public:
    int top1;
    int top2;
    int size;
    int * s;
    int *s1;
};
int count=0;
stackk so;
void push1(int x)
    if(so.top1==so.size-1){
        cout<<"Overflow condition";}
    else{
        so.top1++;
        so.s[so.top1]=x;}
}
void push2(int x)
{
    if(so.top2==so.size-1){
        cout<<"Overflow condition";}
    else{
        so.top2++;
        so.s1[so.top2]=x;}
}
int pop1()
{
    if(so.top==-1)
    {
        cout<<"Underflow";
    }
    else
    {
        int a=so.s[so.top1];
        so.top1--;
        return a;
    }
}
int pop2()
{
    if(so.top2==-1)
    {
        cout<<"Underflow";
    }
    else
    {
        int a=so.s1[so.top2];
        so.top2--;
        return a;
    }
}
void enqueue(int x)
{
    push1(x);
    count++;
}
int dequeue()
{
    int a;
    for(int i=0;i<count;i++)
    {
        a=pop1();
        push2(a);
    }
    cout<<pop2();
    count--;
    for(int i=0;i<count;i++)
    {
        a=pop2();
        push(a);
    }
}
int main()
{
    int number,value,i;
    cout<<"enter the size of stack/number of element to add"<<endl;
    cin>>so.size;
    so.top=-1;
    so.s=new int[so.size];
    so.s1=new int[so.size];




}


