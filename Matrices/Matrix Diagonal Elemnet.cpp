#include<stdio.h>
int main()
{
int a[10][10],i,j,r1,c1,temp=0;
printf("enter the number of row for  matrix");
scanf("%d",&r1);
printf("enter the number of coloumn for  matrix");
scanf("%d",&c1);
printf("enter the element for  matrix");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);

    temp=temp+a[i][j];
    }
}
return temp;
}
