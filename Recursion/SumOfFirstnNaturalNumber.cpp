#include<iostream>
using namespace std;
int SumOfNatural(int n)
{
    if(n==1)
        return 1;
    else
        return SumOfNatural(n-1)+n;

}
int main()
{
    int n;
    cin>>n;
   cout<<"Sum of First "<<n<<" number is "<<SumOfNatural(n);
}
