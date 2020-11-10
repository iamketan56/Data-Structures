#include<stdio.h>
int front=-1;
int rear=-1;
int a[20];
int main()
{
    int n,m;
    printf("enter the number of element wants to insert");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the value to insert");
        scanf("%d",&m);
        enqueue(m);
    }
    display();
    int h;
    printf("how many times u want to dequeue element\n");
    scanf("%d",&h);
    for(int i=0;i<h;i++)
    {
    dequeue();
    }
    display();
}
void enqueue(int x)
{
if(rear>=20)
{
    printf("overflow condition\n");
}
else
{
rear=rear+1;
a[rear]=x;
}
}
 int dequeue()
 {
     int data=a[front];
     front++;
     return data;
 }
void display()
{
     printf("finally the elements in queue is\n");
    for(int i=front+1;i<=rear;i++)
    {
        printf("%d\n",a[i]);
    }
}

