#include<iostream>
using namespace std;
class stackk
{
    public:
    int top;
    int size;
    int * s;
};
int main()
{
    stackk so;
    cout<<"enter the size of stack"<<endl;
    cin>>so.size;
    so.top=-1;
    so.s=new int[so.size];
  while(so.top!=so.size-1)
  {
       so.top++;
      cin>>so.s[so.top];

  }
  while(so.top!=-1)
  {
      cout<<so.s[so.top];
      so.top--;
  }
}
