#include<iostream>
using namespace std;
class node
{
    public:
    int value;
    node *leftchild;
    node *rightchild;
};
func(node *n)
{
    if(n!=NULL)
    {
         func(n->leftchild);
        func(n->rightchild);
        cout<<""<<n->value<<endl;
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
    node *H=new node();
    node *I=new node();
    node *J=new node();
    node *K=new node();
    node *L=new node();
    node *M=new node();
    node *N=new node();
    node *O=new node();
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
    D->leftchild=H;
    D->rightchild=I;
    E->value=6;
    E->leftchild=J;
    E->rightchild=K;
    F->value=7;
    F->leftchild=L;
    F->rightchild=M;
    G->value=8;
    G->leftchild=N;
    G->rightchild=O;
    H->value=9;
    H->leftchild=NULL;
    H->rightchild=NULL;
    I->value=10;
    I->leftchild=NULL;
    I->rightchild=NULL;
    J->value=11;
    J->leftchild=NULL;
    J->rightchild=NULL;
    K->value=12;
    K->leftchild=NULL;
    K->rightchild=NULL;
    L->value=13;
    L->leftchild=NULL;
    L->rightchild=NULL;
    M->value=14;
    M->leftchild=NULL;
    M->rightchild=NULL;
    N->value=15;
    N->leftchild=NULL;
    N->rightchild=NULL;
    O->value=16;
    O->leftchild=NULL;
    O->rightchild=NULL;
    func(A);
}
