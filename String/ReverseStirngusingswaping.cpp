/*
1st method is using two string
2nd method is by swaping
*/
#include<iostream>
using namespace std;
int main()
{
    char A[]={'k','e','t','a','n','s','h','a','r','m','a'};
    int s=sizeof(A)/sizeof(A[0]);
    int i=0;
    int j=s-1;
    int temp;
    while(i<j)
    {
        //cout<<A[j];
       // cout<<endl;
        temp=(int)A[j];
        A[j]=A[i];
        A[i]=(char)temp;
        //cout<<temp;
        i++;
        j--;

    }
    for(int i=0;i<s;i++)
    {
        cout<<A[i]<<endl;
    }
}
