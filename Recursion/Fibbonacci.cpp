#include<iostream>
using namespace std;
int fibo(int n)//recursive
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibo(n-2)+fibo(n-1);
    }
}
void fib(int n)//loop
{
    int a=0;int b=1;
    int c;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<=n;i++)
    {
     c=a+b;
    cout<<" "<<c<<" ";
    a=b;
    b=c;
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;

    fib(n);//O(n^2)
     cout<<n<<" term is: "<<fibo(n);//O(n)
}
