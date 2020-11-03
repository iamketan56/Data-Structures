#include<iostream>
using namespace std;
int main()
{
char *A="ketsn";
char *B="ketan";
int as=sizeof(A)/sizeof(A[0]);
int bs=sizeof(B)/sizeof(B[0]);
if(as!=bs)
{
    cout<<"Not equal";
    return 0;
}
else
{
    int i=0;int j=0;
   while(A[i]!='\0' && A[j]!='\0')
   {
        if(A[i]!=B[j])
            {
                cout<<"Not equal";
            return 0;
            }

        i++;j++;
   }
    cout<<"Equal";
}
}
