#include<stdio.h>
int b[100],top,item,i;
void push();
void pop();
void push();
int main()
{
    int b[10];
    push();
    push();
    push();
        display();
        pop();
        display();
}
void push()
{
    if(top>=100)
    {
        printf("over flow");
    }
        else{
        printf("enter value");
        scanf("%d",&item);//e
        top=top+1;
        b[top]=item;
          }
}void pop()
{

      if(top<=-1)
    {
        printf("list is empty");
    }
    else
{
    printf("data:%d",b[top]);
     top--;
}

}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>0; i--)
            printf("\n%d\n",b[i]);
    }
    else
    {
        printf("\n The STACK is empty");
    }
}

