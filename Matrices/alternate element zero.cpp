#include<iostream>
using namespace std;
int main()
{
    int A[5][5]={0};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(((i+j)%2)==0)
            {
                A[i][j]=1;
            }
        }
    }


    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
           cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
