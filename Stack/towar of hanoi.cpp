#include<iostream>
using namespace std;
void tower(int n,char beg,char aux,char end)
{
	if(n==1)
	{
		cout<<"move disk "<<n<<" from "<<beg<<" to "<<end<<endl;
		return;
	}
	else
	tower(n-1,beg,end,aux);

	cout<<"move disk "<<n<<" from "<<beg<<" to "<<end<<endl;
	tower(n-1,aux,beg,end);
}
int main()
{
	int n;
	cout<<"Enter no. of disks:";
	cin>>n;
	tower(n,'A','B','C');
}
