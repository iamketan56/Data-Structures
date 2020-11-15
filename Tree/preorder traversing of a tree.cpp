#include<iostream>
using namespace std;
class node
{
    public:
    int value;
    node *leftchild;
    node *rightchild;
};
inorder(node *n)
    {
    if(n!=NULL)
    {
         inorder(n->leftchild);
         cout<<"\t"<<n->value;
         inorder(n->rightchild);
    }
    }
preorder(node *n)
    {
    if(n!=NULL)

    {
        cout<<"\t"<<n->value;
        preorder(n->leftchild);
        preorder(n->rightchild);
    }
    }
postorder(node *n)
    {
    if(n!=NULL)
    {
         postorder(n->leftchild);
         postorder(n->rightchild);
         cout<<"\t"<<n->value;
    }
    }
int main()
{
    node *A=new node(); // head = (struct Node*)malloc(sizeof(struct Node)); {for c)//
    node *B=new node();
    node *C=new node();
    node *D=new node();
    node *E=new node();
    node *F=new node();
    node *G=new node();
       A->value=2;
    A->leftchild=B;
    A->rightchild=C;
    B->value=3;
    B->leftchild=D;
    B->rightchild=E;
    C->value=4;
    C->leftchild=F;
    C->rightchild=G;
    D->value=5;
    D->leftchild=D->rightchild=NULL;
    E->value=6;
    E->leftchild=E->rightchild=NULL;
    F->value=7;
    F->leftchild=F->rightchild=NULL;
    G->value=8;
    G->leftchild=G->rightchild=NULL;
    cout<<"\ninorder traversal of tree\n"<<endl;
    inorder(A);
    cout<<"\npreorder traversal of tree\n"<<endl;
    preorder(A);
    cout<<"\npostorder traversal of tree\n"<<endl;
    postorder(A);

}
