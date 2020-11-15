#include<iostream>
using namespace std;
class node
{
    public:
    int value;
    node *leftchild;
    node *rightchild;
};
node *func(node *n,int item)
{
    node *temp;
     int data;
      data=n->value;
    //node *temp;
    if(n==NULL)
    {
    return n;
    }
      else if(item>data)
       {
        func(n->rightchild,item);
       }
       else if(item<data)
       {
        func(n->leftchild,item);
       }
       else//element found
       {
           if(n->leftchild==NULL && n->rightchild==NULL)
           {
               temp=n;
               // cout<<n->value<<endl;
delete temp;
n=NULL;
return n;
               cout<<"deletion is sucessful"<<endl;
           }
          else if(n->leftchild==NULL)
          {
              temp=n;
              n=n->rightchild;
              delete temp;
          }
          else if(n->rightchild==NULL)
          {
              temp=n;
              n=n->leftchild;
              free temp;
          }
       }

    }
fun(node *n)
{

    if(n!=NULL)
    {

         fun(n->leftchild);
          cout<<n<<endl;

        fun(n->rightchild);

    }
}
fundel(node *n)
{

    if(n!=NULL)
    {

         fundel(n->leftchild);
          cout<<"value "<<n->value<<endl;
        cout<<"right "<<n->rightchild<<endl;
         fundel(n->rightchild);
    }
}

int main()
{  int item;
    node *A=new node(); // head = (struct Node*)malloc(sizeof(struct Node)); {for c)//
    node *B=new node();
    node *C=new node();
    node *D=new node();
    node *E=new node();
    node *F=new node();
    node *G=new node();
    node *H=new node();
     A->value=50;
    A->leftchild=B;
    A->rightchild=C;
    B->value=40;
    B->leftchild=D;
    B->rightchild=E;
    C->value=60;
    C->leftchild=F;
    C->rightchild=G;
    D->value=39;
    D->leftchild=NULL;
    D->rightchild=NULL;
    E->value=41;
    E->leftchild=NULL;
    E->rightchild=NULL;
    F->value=59;
    F->leftchild=NULL;
    F->rightchild=NULL;
    G->value=61;
    G->leftchild=NULL;
    G->rightchild=NULL;
     cout<<"tree contain :"<<endl;
    fun(A);
    cout<<"enter the value u wanna DELETE from binary tree"<<endl;
    cin>>item;
    func(A,item);
    cout<<"tree contain :"<<endl;
    fun(A);
}
