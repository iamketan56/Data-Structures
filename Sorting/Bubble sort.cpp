#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
   * b=temp;
}
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
    int flag;
    for(int i=0;i<=n-1;i++)
    {
        flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
                flag=1;
            }
        }
        if(flag=0)
            break;
    }

    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
}
