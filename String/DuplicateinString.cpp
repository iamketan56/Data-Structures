/*
three method
1.compare every element with another element
2.using hash table
3.use bit map by masking and merging (by checking bit on or off)
*/
#include<iostream>
using namespace std;
int main()
{
char A[]="viviaana";
int H[25]={0};//122-97=25
for(int i=0;A[i]!='\0';i++)
{
    H[A[i]-97]++;
}
for(int i=0;i<25;i++)
{

    if(H[i]>1)
    {
     cout<<(char)(i+97)<<" is repeating "<<H[i]<<" times "<<endl;
    }
}


}
