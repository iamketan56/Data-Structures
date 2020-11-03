#include<iostream>
using namespace std;
void perm(char s[],int k)
{
     static int A[10]={0};
    static char R[10];
    int i=0;
    cout<<R;
    if(s[k]=='\0')
    {
        R[k]='\0';
    }
    else
    {
        for(i=0;s[i]!='\0';i++)
        {
            //cout<<s[i];
            if(A[i]==0)
            {
                //cout<<endl;
                R[k]=s[i];
                A[i]=1;
               // cout<<R<<endl;
                perm(s,k++);
                A[i]=0;
                k--;
                //k--;
            }
            //cout<<R<<endl;
        }

    }
}
int main()
{
    char s[]="ABC";
    perm(s,0);
}
