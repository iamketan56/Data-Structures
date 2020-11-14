#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of element in the tree"<<endl;
    cin>>n;
    int a[n];
    int i=0;
    cout<<"Enter the root element"<<endl;
    cin>>a[0];
    int count=1;
    for(i=0;i<n/2;i++)
    {
        cout<<"enter left child of "<<a[i]<<endl;
        cin>>a[(2*i)+1];
        count++;
        if(count!=n)
        {
        cout<<"Right child of "<<a[i]<<endl;
        cin>>a[(2*i)+2];
        count++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

}
