#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* left_chlid;
    node* right_child;
};
node * insertleftnode(node * head)
{
    int value;
    cout<<"Enter the value of left child for"<<head->data<<endl;
    cin>>value;
    node * left=new node();
    left->left_chlid= NULL;
    left->right_child=NULL;
    left->data=value;
    head->left_chlid=left;
    return left;
}
node * insertrightnode(node * head)
{
    int value;
    cout<<"Enter the value of right child for"<<head->data<<endl;
    cin>>value;
    node * right=new node();
   right->left_chlid=NULL;
    right->right_child=NULL;
    right->data=value;
    head->right_child=right;
    return right;
}
/*
void traversing(node * head1)
{
    while(head1!=NULL)
    {
        traversing(head1->left_chlid);
        cout<<head1->data;
        traversing(head1->right_child);
    }
}*/
int main()
{
    int n,value;

    cout<<"Enter the number of element you wanna insert"<<endl;
    cin>>n;
    node *ptr[n];
    *ptr=new node();
    cout<<"Enter the value for root element"<<endl;
    cin>>value;
    int count=1;
    node * root=new node();
    root->left_chlid= NULL;
    root->right_child=NULL;
    root->data=value;
    ptr[0]=root;
    node *temp=root;
    int i=0;
    int flag=0;
    while(i!=count)
    {
        cout<<"You want to insert left node of "<<temp->data<<" ?...if Yes-Press :1 , If  no-Press:0"<<endl;
        cin>>flag;
        if(count!=n && flag==1)
        {
        ptr[(2*i)+1]=insertleftnode(temp);
        count++;
        flag=0;
        }
        cout<<"You want to insert right "<<temp->data<<" node?...if Yes-Press :1 , If  no-Press:0"<<endl;
        cin>>flag;
        if(count!=n && flag==1)
        {
        ptr[(2*i)+2]=insertrightnode(temp);
        count++;
        }
        temp=ptr[i+1];
        i++;
    }
    cout<<"Output"<<endl;
    cout<<root->data<<endl;
    cout<<"Left subtree"<<endl;
    cout<<root->left_chlid->data<<endl;
    //cout<<root->left_chlid->left_chlid->data<<endl;
    cout<<root->left_chlid->right_child->data<<endl;
    cout<<"Right subtree"<<endl;
    cout<<root->right_child->data<<endl;
    cout<<root->right_child->left_chlid->data<<endl;
   // cout<<root->right_child->right_child->data<<endl;
    cout<<root->left_chlid->right_child->left_chlid->data<<endl;
    cout<<root->left_chlid->right_child->right_child->data<<endl;


}
