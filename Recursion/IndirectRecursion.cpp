#include<iostream>
using namespace std;
void fun2(int);
void fun1(int n)
{
    if(n>0)
    {
    cout<<"value is:"<<n<<endl;
    fun2(n-1);
    }
}
void fun2(int n)
{
     if(n>0)
    {
    cout<<"value is:"<<n<<endl;
    fun1(n/2);
    }
}
int main()
{
    //indirect recursion is when one function calls another function in a circular manner
int n;
cin>>n;
fun1(n);

}
