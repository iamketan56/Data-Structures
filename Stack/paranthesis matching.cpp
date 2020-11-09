#include<iostream>
using namespace std;
class stackk
{
    public:
    int top;
    int size;
    char * s;
};
stackk so;
void push(char x)
{
    if(so.top==so.size-1){
        cout<<"Overflow condition";}
    else{
        so.top++;
        so.s[so.top]=x;}
}
void pop()
{
    if(so.top==-1)
    {
        cout<<"Underflow";
    }
    else
    {
        char a=so.s[so.top];
        so.top--;
    }
}
int isbalance(char *exp)
{
 so.top=-1;
 for(int i=0;exp[i]!='\0';i++)
 {
     if(exp[i]=='(')
     {
         push(exp[i]);
     }
     else if(exp[i]==')')
         {
             if(so.top==-1)
             {
                 cout<<"Not matching";
                 return 0;
             }
             else
             {
                 pop();
             }
         }
     }
 if(so.top==-1)
    cout<<"matching";
 else
    cout<<"Not matching";
}
int main()
{
    char exp[]="(a+b)+c+(d*e)-(g+h)";
    so.size=sizeof(exp)/sizeof(char);
    so.s=new char[so.size];
    isbalance(exp);
}
