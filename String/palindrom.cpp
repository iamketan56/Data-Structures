#include<iostream>
using namespace std;
int main()
{
    char A[]="ketan";
      int s=sizeof(A)/sizeof(A[0]);
      int i=0;int j=s-2;


    while(i<j)
        {
        if(A[i]!=A[j])
        {
            cout<<"Not palindrom";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"Palindrom";
}
