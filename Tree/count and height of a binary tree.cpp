#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* left_chlid;
    node* right_child;
};
node * createBinaryTree()
{
    int value;
    node * newnode = new node();
    cout<<"Enter data(-1 if don't want to insert)"<<endl;
    cin>>value;
    if(value==-1)
    {
        return 0;
    }
    else
    {
    newnode->data=value;
    cout<<"Enter left child of"<<value<<endl;
    newnode->left_chlid = createBinaryTree();
    cout<<"Enter right child of"<<value<<endl;
    newnode->right_child = createBinaryTree();
    return newnode;
    }
}
 int countnode(node * p)
 {
     int x,y;
     if(p!=0)
     {
         x=countnode(p->left_chlid);
         y=countnode(p->right_child);
         return x+y+1;
     }
 }
 int heightnode(node * p)
 {
     int x=0;int y=0;
     if(p==0)
     {
         return 0;
     }
     x=heightnode(p->left_chlid);
     y=heightnode(p->right_child);
     if(x>y)
     {
         return x;
     }
     else{
        return y;
     }
 }
int main()
{
    int n;
    node * root=new node();
    root=createBinaryTree();
    cout<<"Count of node in this tree is :"<<countnode(root);
    cout<<"Height of this tree is :"<<heightnode(root);
}

