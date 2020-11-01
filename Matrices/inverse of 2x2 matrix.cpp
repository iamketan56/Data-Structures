#include<iostream>
using namespace std;
void deter();
int main()
{
    int a[2][2]={0};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
        cin>>a[i][j];
    }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(i==j)
                {
                a[i][j]=a[j+1][i+1];
                }
            else
                {
                a[i][j]=-a[i][j];
              //  a[j][i]=((-1)*a[j][i]);
                }
        }
        }
              int i=0;
            int j=0;

  /*     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<(a[i][j]/d);
        }
    }
    */
    cout<<(a[i][j])*(a[i+1][j+1])-(a[i][j+1])*(a[i+1][j]);
}

