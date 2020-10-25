#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,r1,r2,c1,c2;
printf("enter the number of row for 1st matrix");
scanf("%d",&r1);
printf("enter the number of coloumn for 1st matrix");
scanf("%d",&c1);
printf("enter the number of row for 2nd matrix");
scanf("%d",&r2);
printf("enter the number of coloumn for 2nd matrix");
scanf("%d",&c2);
if(c1==r2)
    {
printf("enter the element for 1st matrix");
for(i=1;i<=r1;i++)
    {
for(j=1;j<=c1;j++)
    {
    scanf("%d",&a[i][j]);
    }
    }
printf("enter the element for second matrix");
for(i=1;i<=r2;i++)
    {
for(j=1;j<=c2;j++)
    {
scanf("%d",&b[i][j]);
    }
    }
printf("product of matrix");
for(i=1;i<=r1;i++)
    {
for(j=1;j<=c2;j++)
    {
    c[i][j]=0;
for(int k=1;k<=r2;k++)
    {
 c[i][j]+=a[i][k]*b[k][j];
    }
    }
    }
for(i=1;i<=r1;i++)
    {
    for(j=1;j<=c2;j++)
    {
    printf("\n%d",c[i][j]);
    }
    }
    }
else
    printf("multiplication is not possible");
}
