#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left;
    node * right;
};
node * create()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    node * root=new node(d);
    root->left=create();
    root->right=create();
    return root;
}
void pre(node * root)
{

       cout<<root->data<<"->";
       pre(root->left);
       pre(root->right);
}
void in(node * root)
{
       in(root->left);
       cout<<root->data<<"->";
       in(root->right);
}
void post(node * root)
{
       in(root->left);
       in(root->right);
       cout<<root->data<<"->";
}
int main()
{
    create();
    pre(root);
}
