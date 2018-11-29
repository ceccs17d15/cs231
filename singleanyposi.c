Athira Suresh
Roll no:15

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;          
    struct node *next;  
}*head;


void createList(int n);
void insertNodeAtMiddle(int data, int position);
void displayList();


int main()
{
    int n, data, position;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("Data in the list");
    displayList();
    printf("nEnter data to insert at middle of the list: ");
    scanf("%d", &data);
    printf("Enter the position to insert new node: " );
    scanf("%d", &position);
    insertNodeAtMiddle(data, position);

    printf("Data in the list");
    displayList();

    return 0;
}
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Enter the data of node 1: ");
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

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY");
    }
}
void insertNodeAtMiddle(int data, int position)
{
    int i;
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; 
        newNode->next = NULL;

        temp = head;
        for(i=2; i<=position-1; i++)
        {
            temp = temp->next;

            if(temp == NULL)
                break;
        }

        if(temp != NULL)
        {
            
            newNode->next = temp->next; 

            
            temp->next = newNode;

            printf("DATA INSERTED SUCCESSFULLY");
        }
        else
        {
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION");
        }
    }
}
void displayList()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->next;                 
        }
    }
}
output:
Enter the total number of nodes: 4
Enter the data of node 1: 2
Enter the data of node 2: 5
Enter the data of node 3: 6
Enter the data of node 4: 7
SINGLY LINKED LIST CREATED SUCCESSFULLYData in the listData = 2
Data = 5
Data = 6
Data = 7
nEnter data to insert at middle of the list: 6
Enter the position to insert new node: 2
DATA INSERTED SUCCESSFULLYData in the listData = 2
Data = 6
Data = 5
Data = 6
Data = 7
