#include<stdio.h>
int main()
{
int i,j,r1,c1,temp=0,temp2=0;
printf("enter the number of row for  matrix");
scanf("%d",&r1);
printf("enter the number of coloumn for  matrix");
scanf("%d",&c1);
int a[r1][c1];
printf("enter the element for  matrix");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
if(i==j)
    {
    temp=temp+a[i][j];
    }
if(i+j==r1-1)
{
    temp2+=a[i][j];
}
}
}
int result=abs(temp-temp2);
printf("Sum of left to right diagonal difference element:%d\n",result);
//printf("Sum of right to left diagonal element:%d\n",temp2);
}
