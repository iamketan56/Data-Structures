#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
}*head;
void createList(int n);
void alternode();
void display();
int main()
{
  int data1;
  int data2;
    int n, data, position;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
    printf("\nData in the list \n");
    display();
    printf("alternate element according to created list \n");
   alternode();
       return 0;
}
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));
    if(head != NULL)

    {    printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;
        temp = head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data;
                newNode->next = NULL;

                temp->next = newNode;
                temp = temp->next;
            }
        }
        printf("list is created");
    }
}
void alternode()
{
    struct node*n;
    n=head;
    int a=0;
    while(n!=NULL)
    {
        if(a %2==0)
        {
            printf("%d\n",n->data);

            // printf("%d",n->data);
    }   a++;
             n=n->next;

    }

}

void display()
{
    struct node *temp;

        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }

}

