#include<stdio.h>
int main()
{
int i,j,n,temp;
printf("enter the size of arrey");
scanf("%d",&n);
int a[n];
printf("enter the element in arrey");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
    printf("\n%d",a[i]);
}
}
