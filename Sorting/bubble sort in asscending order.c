#include<stdio.h>
main()
{
int n,i,temp;
printf("enter the size of arrey");
scanf("%d",&n);
int a[n];
printf("enter the %d element ",n);
for(i=0;i<n;i++)

{
    scanf("%d",&a[i]);
}
    for(int j=0;j<n;j++)//postion inc krne k lie
    {
    for(i=0;i<n-1;i++)//pass chlane ke lie
{
    if(a[i]>a[i+1])
{
    temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
}}}
 for(i=0;i<n;i++)
{
    printf("\n%d",a[i]);
}
}
