#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
}*head;
void createList(int n);
void insertbeg(int data1);
void insertNodeAtMiddle(int data, int position);
insertend(int data2);
void display();
int main()
{ int data1;
int data2;
    int n, data, position;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
    printf("\nData in the list \n");
    display();
        printf("\nEnter data to insert at begining of the list: ");
    scanf("%d", &data1);
   insertbeg(data1);
          printf("\nData in the list \n");
        display();
        printf("\nEnter data to insert at middle of the list: ");
    scanf("%d", &data);
    printf("Enter the position to insert new node: " );
    scanf("%d", &position);
    insertafter(data, position);
     printf("\nData in the list \n");
    display();
      printf("\nEnter data to insert at end of the list: ");
     scanf("%d", &data2);
    insertend(data2);
    printf("\nData in the list \n");
    display();
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
insertbeg(int data1)
{
    struct node * newNode;
     newNode = (struct node*)malloc(sizeof(struct node));
     newNode->data=data1;
     newNode->next=head;
     head=newNode;
}
void insertafter(int data, int position)
{
    int i;
    struct node *newNode, *temp;
    newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode != NULL)
    {        newNode->data = data;
        newNode->next = NULL;
        temp = head;
        for(i=2; i<=position-1; i++)
        {
            temp = temp->next;
            if(temp == NULL)
                break;
        }
        if(temp != NULL)
        {    newNode->next = temp->next;
            temp->next = newNode;
            printf("insertion is sucessfull");
        }
        else
        {
            printf("not able to insert");
        }
    }
}
 insertend(int data2)
{
   {
    struct node *newNode, *temp;
    newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data2;
        newNode->next = NULL;
        temp = head;
        while(temp->next != NULL)
            temp = temp->next;
            temp->next = newNode;

}
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
