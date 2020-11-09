#include<stdio.h>
void push()
{
    int item,top=-1,maxstack=10;
    int b[maxstack];
    if(top>=maxstack)
    {
        printf("over flow");
    }
        else{
        printf("enter value");
        scanf("%d",&item);//e
        top=top+1;
        b[top]=item;
          }
}


int main()
{
    int top=-1;
    int b[10];
push();
push();
 for(int i=0;i<3;i++)
    {
        printf("%d\n",b[i]);
    }
}
