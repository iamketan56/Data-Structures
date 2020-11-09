#include<iostream>
using namespace std;
class stackk
{
    public:
    int top;
    int size;
    char *s;
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
char pop()
{
    if(so.top==-1)
    {
        cout<<"Underflow";
    }
    else
    {
        char a=so.s[so.top];

        so.top--;
        return a;
    }
}
int isOprend(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;
    else
        return 1;
}
int precedance(char x)
{
    if(x=='+' || x=='-' )
        return 1;
    else if(x=='*' || x=='/')
        return 2;
    else
        return 0;
}
char * INF_TO_POS(char * infix)
{
    //cout<<"a";
    char * postfix=new char[so.size];
    int i=0; int j=0;
    so.top=-1;
    while(infix[i]!='\0')
    {
        //cout<<"n";
        if(isOprend(infix[i]))
            {
               // cout<<"s";
            postfix[j++]=infix[i++];

            }
        else{
            if(precedance(infix[i])>precedance(so.s[so.top]))
            {
               // cout<<"h";
             push(infix[i++]);
            }
            else
            {
             postfix[j++]=pop();
            }
            }
    }
    while(so.top!=-1)
    {
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    return postfix;
}
int main()
{
    //cout<<"K";
    char infix[]="a+b*c-d";
    //cout<<"e";
    so.size=sizeof(infix)/sizeof(char);
    so.s= new char[so.size];
    //cout<<"t";
  cout<<INF_TO_POS(infix);
}
