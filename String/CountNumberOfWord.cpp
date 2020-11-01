#include<iostream>
using namespace std;
int main()
{
    char A[]="i am ketan  sharma";
    int word=0;
   for(int i=0;A[i]!='\0';i++)
   {
    if(A[i]==' ' && A[i-1]!=' ')
    {

        word++;
   }
}
cout<<"Number of word is "<<word+1;
}
