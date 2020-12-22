#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of element "<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter the value"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int j,x;
    for(int i=1;i<=n-1;i++)
    {
        int x=A[i];
       j=i-1;
       while(A[j]>x && j>-1)
       {
           A[j+1]=A[j];
           j--;
       }
       A[j+1]=x;
    }
     for(int i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
}
