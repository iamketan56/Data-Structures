#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j,a[10][10];
    int temp=0;
    cout<<"enter rows of matrix :";
    cin>>r;
    cout<<"enter column of matrix :";
    cin>>c;
    cout<<"enter the elements of array :";
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
     {
         cin>>a[i][j];
         if(i==j)
         {
             temp+=a[i][j];
         }
     }
  }
  return temp;
}
