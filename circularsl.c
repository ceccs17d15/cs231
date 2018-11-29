Athira Suresh
roll no:15

#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node * next;
}*head;


void createList(int n);
void displayList();
void insertAtBeginning(int data);
void insertAtN(int data, int position);


int main()
{
    int n, data, choice=1;

    head = NULL;

    while(choice != 0)
    {
        printf("CIRCULAR LINKED LIST PROGRAM\n");
        printf("1. Create List\n");
        printf("2. Display list\n");
        printf("3. Insert at beginning\n");
        printf("4. Insert at any position\n");
        printf("0. Exit\n");
        printf("Enter your choice  ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the total number of nodes in list ");
                scanf("%d", &n);
                createList(n);
                break;
            case 2:
                displayList();
                break;
            case 3:
                printf("Enter data to be inserted at beginning ");
                scanf("%d", &data);
                insertAtBeginning(data);
                break;
            case 4:
                printf("Enter node position ");
                scanf("%d", &n);
                printf("Enter data you want to insert at %d position ", n);
                scanf("%d", &data);
                insertAtN(data, n);
                break;
            case 0:
                break;
            default:
                printf("Error! Invalid choice. Please choose between 0-4");
        }

        printf("\n\n\n\n\n");
    }

    return 0;
}



void createList(int n)
{
    int i, data;
    struct node *prevNode, *newNode;

    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));

        printf("Enter data of 1 node: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        prevNode = head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            printf("Enter data of %d node ", i);
            scanf("%d", &data);

            newNode->data = data;
            newNode->next = NULL;

            prevNode->next = newNode;
      
            prevNode = newNode;
        }

    
        prevNode->next = head;

        printf("CIRCULAR LINKED LIST CREATED SUCCESSFULLY");
    }
}

void displayList()
{
    struct node *current;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        current = head;
        printf("DATA IN THE LIST");

        do {
            printf("Data %d = %d", n, current->data);

            current = current->next;
            n++;
        }while(current != head);
    }
}

void insertAtBeginning(int data)
{
    struct node *newNode, *current;

    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = head;

        current = head;
        while(current->next != head)
        {
            current = current->next;
        }
        current->next = newNode;

        head = newNode;

        printf("NODE INSERTED SUCCESSFULLY");
    }
}

void insertAtN(int data, int position)
{
    struct node *newNode, *current;
    int i;

    if(head == NULL)
    {
        printf("List is empty");
    }
    else if(position == 1)
    {
        insertAtBeginning(data);
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;

        current = head;
        for(i=2; i<=position-1; i++)
        {
            current = current->next;
        }

      
        newNode->next = current->next;
        current->next = newNode;

        printf("NODE INSERTED SUCCESSFULLY");
    }
}
output:CIRCULAR LINKED LIST PROGRAM
1. Create List
2. Display list
3. Insert at beginning
4. Insert at any position
0. Exit
Enter your choice  1
Enter the total number of nodes in list 4
Enter data of 1 node: 1
Enter data of 2 node 2
Enter data of 3 node 3
Enter data of 4 node 4
CIRCULAR LINKED LIST CREATED SUCCESSFULLY




CIRCULAR LINKED LIST PROGRAM
1. Create List
2. Display list
3. Insert at beginning
4. Insert at any position
0. Exit
Enter your choice  3
Enter data to be inserted at beginning 6
NODE INSERTED SUCCESSFULLY




CIRCULAR LINKED LIST PROGRAM
1. Create List
2. Display list
3. Insert at beginning
4. Insert at any position
0. Exit
Enter your choice  2
DATA IN THE LISTData 1 = 6Data 2 = 1Data 3 = 2Data 4 = 3Data 5 = 4




CIRCULAR LINKED LIST PROGRAM
1. Create List
2. Display list
3. Insert at beginning
4. Insert at any position
0. Exit
Enter your choice  4
Enter node position 7
Enter data you want to insert at 7 position 2
NODE INSERTED SUCCESSFULLY




CIRCULAR LINKED LIST PROGRAM
1. Create List
2. Display list
3. Insert at beginning
4. Insert at any position
0. Exit
Enter your choice  2
DATA IN THE LISTData 1 = 6Data 2 = 2Data 3 = 1Data 4 = 2Data 5 = 3Data 6 = 4

