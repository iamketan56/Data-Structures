/*row major*/
#include<iostream>
using namespace std;
void set(int A[],int r,int c,int x)
{

     A[((r*(r-1))/2)+(c-1)]=x;
     /*(n(c-1)-(j-2)(j-1)/2)+(i-j)  column major*/
}
int get(int A[],int r,int c)
{
        return A[(r*(r-1))/2+(c-1)];
}
int main()
{
    int n,x,row,col;
    cout<<"Enter the number of element"<<endl;
    cin>>n;
    int A[2*n];
    cout<<"For symmetric matrix (using lower triangular matrix) row no is greater then column"<<endl;
    for(int i=0;i<n;i++)
    {
    cout<<"Enter the row number starts form 1"<<endl;
    cin>>row;
    cout<<"enter the column number(<row)"<<endl;
    cin>>col;
    cout<<"Enter the value to store"<<endl;
    cin>>x;
    set(A,row,col,x);
    set(A,col,row,x);
    }
    cout<<"Enter the number of element to get"<<endl;
    cin>>n;
     for(int i=0;i<n;i++)
    {
    cout<<"Enter the row number starts form 1"<<endl;
    cin>>row;
    cout<<"enter the column number(<row)"<<endl;
    cin>>col;
    cout<<get(A,row,col);
    }



}
