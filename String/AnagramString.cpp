#include<iostream>
using namespace std;
int main()
{
    char A[]="ketan";
    char B[]="tankes";
int    H[25]={0};int i;
    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]++;
       // cout<<H[A[i]-97]<<endl;
    }
    for( int i=0;B[i]!='\0';i++)
    {
        H[B[i]-97]--;
    }

        for(int j=0;j<25;j++)
        {
        if(H[j]<0)
        {
            cout<<"Not anagram";
            return 0;
        }
    }
    if(B[i]=='\0')
    {
        cout<<"Anagram";
    }
}
