#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number of element to insert"<<endl;
    cin>>number;
    char element;
    int priority;
    char q1[number];
    char q2[number];
   char q3[number];
    for(int i=0;i<number;i++)
    {
        cout<<"Enter the element"<<endl;
        cin>>element;
        cout<<"Enter the priority"<<endl;
        cin>>priority;
        if(priority==1)
        {
            q1[i]=element;
        }

        if(priority==2)
        {
            q2[i]=element;
        }

        if(priority==3)
        {
            q3[i]=element;
        }
    }
cout<<
}
/*
    /*for(int i=0;i<s;i++)
    {
//cout<<"%c"<<q1[i]<<endl;
    }
s=sizeof(q2)/sizeof(q2[0]);
cout<<s;
   /* for(int i=0;i<s;i++)
    {
     //   cout<<"%c"<<q2[i]<<endl;
    }*
    s=sizeof(q3)/sizeof(q3[0]);
    cout<<s;
  /*  for(int i=0;i<s;i++)
    {
       // cout<<"%c"<<q3[i]<<endl;
    }*/


