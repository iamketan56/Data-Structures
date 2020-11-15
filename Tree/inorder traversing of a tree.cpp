#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *left, *right;
};

/* Function to insert new nodes to the tree. */
struct node *newnode(int data) {
    struct node *node;
    node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

/* Function to insert the formed nodes to the tree when a parent node does not have a right or the left child. */
void insert(struct node *root, int data) {
    struct node *temp;
    queue<struct node*>q;
    q.push(root);
    while(!q.empty())
    {
        temp = q.front();
        q.pop();

        /* Insert node as the left child of the parent node. */
        if(temp->left == NULL) {
            temp->left = newnode(data);
            break;
        }

        /* If the left node is not null push it to the queue. */
        else
            q.push(temp->left);

        /* Insert node as the right child of the parent node. */
        if(temp->right == NULL) {
            temp->right = newnode(data);
            break;
        }

        /* If the right node is not null push it to the queue. */
        else
            q.push(temp->right);
    }
}

/* Function for tree traversal of every node in the tree. */
void traversal(struct node *root) {
    if(root == NULL)
        return;
    traversal(root->left);
    cout << root->data << " ";
    traversal(root->right);
}

/* Driver function to check the above algorithm. */
int main() {
    struct node* root = newnode(1);
    root->left = newnode(10);
    root->left->left = newnode(20);
    root->right = newnode(34);
    int key = 12;
    insert(root, key);
    cout << endl;
    cout << "Inorder traversal after insertion: ";
    traversal(root);
}
