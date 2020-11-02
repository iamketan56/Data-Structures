#include<iostream>
using namespace std;
int main()
{
    char A[]="welcome";
    int v=0;int c=0;
    for(int i=0;A[i]!='\0';i++)
    {
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='u'||A[i]=='o')
        {
            v++;
        }
        else if((A[i]>=97 && A[i]<=122) && (A[i]!='a'||A[i]!='e'||A[i]!='i'||A[i]!='u'||A[i]!='o'))
        {
            c++;
        }
    }
    cout<<"Number of vowel use is"<<v;
    cout<<"no of consonant is"<<c;

    }
