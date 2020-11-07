#include<iostream>
using namespace std;
TOH(int n,int a,int b,int c)
{
    if(n>0)
    {
        TOH(n-1,a,c,b);
        cout<<"From "<<a<<" to "<<c<<endl;
        TOH(n-1,b,a,c);
    }
}
int main()
{
    int a,b,c,n;
    cin>>n>>a>>b>>c;
    TOH(n,a,b,c);
}
