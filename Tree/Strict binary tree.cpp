#include<iostream>
using namespace std;
class node
{
    public:
    node* leftlink;
    node* rightlink;
    int data;
};
node * insertinsbt(node * head,int value)
{
    cout<<"Want to insert the left child of"<<first->data<<"press(-1 if don't want)"<<endl;
    cin>>value;
    if(value=-1)
    {
      return NULL;
    }
    else
    {   node * newnode =new node();

        cout<<"Enter the value of left child"<<endl;
        cin>>value;
        newnode->data=value;
        newnode->leftlink=NULL;
        newnode->rightlink=NULL;


        cout<<"Enter the value of right child"<<endl;
        cin>>value;
        node * newnode =new node();
        newnode->data=value;
        newnode->leftlink=NULL;
        newnode->rightlink=NULL;


    }


}
int main()
{
    int n;
    cout<<"Enter the number of node to inserted"<<endl;
    cin>>n;
    int value;
    node * ptr[n];
    node * first =new node();
    first->leftlink=NULL;
    first->rightlink=NULL;
    cout<<"Enter the value of root node"<<endl;
    cin>>value;
    first->data=value;
    ptr[0]=root;
    cout<<"Want to insert child of"<<first->data<<"node press(0) else press(-1)"<<endl;
    cin>>value;

}
