//Binary tree Recursive
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
 void inordertraversal(node * root)
{
    if(root==0)
    {
        return;
    }
        inordertraversal(root->left_chlid);
        cout<<root->data;
        inordertraversal(root->right_child);
    }
int main()
{
    int n;
    node * root=new node();
    root=createBinaryTree();
    inordertraversal(root);
}
