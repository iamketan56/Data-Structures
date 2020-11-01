#include<iostream>
using namespace std;
void set(int A[],int i,int j,int x)
{
    if(i==j)
        A[i-1]=x;
}
void get(int A[],int a,int b)
{
    if(a==b)
        cout<<A[a-1];
    else
        cout<<0;
    cout<<endl;
}
int main()
{
    int n,i,j,x;
   cout<<"Enter the number of element"<<endl;
   cin>>n;
   int A[n];
   cout<<"Enter diagonally elements";
     for(int v=0;v<n;v++)
   {
   cout<<"Enter the value of row and column"<<endl;
   cin>>i>>j;
   cout<<"Enter the value to store"<<endl;
    cin>>x;
    set(A,i,j,x);
   }
   for(int a=0;a<n;a++)
   {
       for(int b=0;b<n;b++)
       {
           get(A,a,b);
       }
   }


}
