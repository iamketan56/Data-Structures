#include<iostream>
using namespace std;
void tailRecursion(int n)
{
    if(n>0)
    {
    cout<<"value is:"<<n<<endl;
    tailRecursion(n-1);
    }
}
void headRecursion(int n)
{

     if(n>0)
    {
      headRecursion(n-1);
    cout<<"value is:"<<n<<endl;
    }
}
void treeRecursion(int n)
{
    if(n>0)
    {
        cout<<"value is:"<<n<<endl;
        treeRecursion(n-1);
        treeRecursion(n-1);
    }
}
int nestedRecursion(int n)//95 nestedRecursion(95)
{
    if(n>100)              // condition false
    {
        return n-10;
    }
    else                   //come into this part
    {
        return nestedRecursion(nestedRecursion(n+11));// return nestedRecursion(nestedRecursion(95+11)//95+11=106
    }                                               //106>100 then go into if part and return 106-10=96
}
int main()
{
    int n,m;
    cin>>n;
    cout<<"Tail Recursion"<<endl;
     cout<<"-------------"<<endl;
    tailRecursion(n);
    cout<<"Head Recursion"<<endl;
    cout<<"-------------"<<endl;
    headRecursion(n);
    cout<<"Tree Recursion"<<endl;
    cout<<"-------------"<<endl;
    treeRecursion(n);
   /* cout<<"Nested Recursion Answer"<<endl;
     cout<<"-------------"<<endl;
    m=nestedRecursion(n);
    cout<<m;*/
}
