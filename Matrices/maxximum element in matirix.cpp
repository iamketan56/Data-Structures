#include<iostream>
using namespace std;
int main()
{
    int A[3][3]={{1,2,3},{5,6,7},{2,4,11}};
    int max=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(A[i][j]>max)
            {
                max=A[i][j];
            }
        }
    }
    cout<<max;
}
