#include<iostream>
using namespace std;
class stackk
{
    public:
    int top;
    int size;
    int * s;
};
stackk so;
void push(int x)
{
    if(so.top==so.size-1){
        cout<<"Overflow condition";}
    else{
        so.top++;
        so.s[so.top]=x;}
}
int pop()
{
    if(so.top==-1)
    {
        cout<<"Underflow";
    }
    else
    {
        int a=so.s[so.top];
        so.top--;
        return a;
    }
}
int peek(int pos)
{
    if(so.top-pos+1<0)
        cout<<"invalid position"<<endl;
    else
        return so.s[so.top-pos+1];
}
int main()
{
    int number,value;
    cout<<"enter the size of stack"<<endl;
    cin>>so.size;
    so.top=-1;
    so.s=new int[so.size];
    cout<<"Enter the the number of element to insert"<<endl;
    cin>>number;
    int i=0;
    while(i!=number)
    {
        cout<<"Enter the value"<<endl;
        cin>>value;
        push(value);
        i++;
    }
    cout<<so.top;
   /*while(so.top!=-1)
    {
        cout<<pop();
    }*/
    cout<<peek(5);
}
