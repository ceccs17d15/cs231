Athira Suresh
roll no:15

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node * next;
};
void createList(struct node ** head, int n);
void displayList(struct node ** head);
void deleteAll(struct node ** head, int key);


int main()
{
    int n, key, data, choice;
    struct node * head = NULL;
    while(choice != 0)
    {
        printf(" CIRCULAR LINKED LIST PROGRAM \n");
        printf("1. Create List\n");
        printf("2. Display list\n");
        printf("3. Delete all by key\n");
        printf("0. Exit\n");
        printf("Enter your choice");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of nodes to create: ");
                scanf("%d", &n);
                createList(&head, n);
                break;

            case 2:
                displayList(&head);
                break;

            case 3:
                printf("Enter key to delete from list: ");
                scanf("%d", &key);
                deleteAll(&head, key);
                break;

            case 0:
                exit(0);
                break;

            default:
                printf("Error! Invalid choice. Please choose between 0-3");
        }
    }

    return 0;
}
void deleteAll(struct node ** head, int key)
{
    int i, count;
    struct node *prev, *cur;

    if (*head == NULL)
    {
        printf("List is empty");
        return;
    }

    count = 0;
    cur   = *head;
    prev  = cur;
    while (prev->next != *head) 
    {
        prev = prev->next;
        count++;
    }
    i = 0;
    while (i <= count)
    {
        if (cur->data == key)
        {
            if (cur->next != cur)
                prev->next = cur->next;
            else
                prev->next = NULL;
            if (cur == *head)
                *head = prev->next;
            free(cur);
            if (prev != NULL) 
                cur = prev->next;
            else
                cur = NULL;
        }
        else 
        {
            prev = cur;
            cur  = cur->next;
        }


        i++;

    }
}
void createList(struct node ** head, int n)
{
    int i, data;
    struct node *prevNode, *newNode;

    prevNode = NULL;
    for(i=1; i<=n; i++)
    {
        newNode = malloc(sizeof(struct node));

        printf("Enter data of %d node ", i);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;
        if (prevNode != NULL) 
            prevNode->next = newNode; 
        if (*head == NULL)
            *head = newNode;
        prevNode = newNode;
    }
    prevNode->next = *head;

    printf("CIRCULAR LINKED LIST CREATED SUCCESSFULLY");
}
void displayList(struct node ** head)
{
    struct node *current;
    int n = 1;

    if(*head == NULL)
    {
        printf("List is empty");
        return;
    }

    current = *head;
    printf("DATA IN THE LIST");

    do {
        printf("Data %d = %d", n, current->data);

        current = current->next;
        n++;
    }while(current != *head);
}
output:
CIRCULAR LINKED LIST PROGRAM 
1. Create List
2. Display list
3. Delete all by key
0. Exit
Enter your choice1
Enter number of nodes to create: 5
Enter data of 1 node 34
Enter data of 2 node 25
Enter data of 3 node 12
Enter data of 4 node 16
Enter data of 5 node 7
CIRCULAR LINKED LIST CREATED SUCCESSFULLY CIRCULAR LINKED LIST PROGRAM 
1. Create List
2. Display list
3. Delete all by key
0. Exit
Enter your choice3
Enter key to delete from list: 12
 CIRCULAR LINKED LIST PROGRAM 
1. Create List
2. Display list
3. Delete all by key
0. Exit
Enter your choice2
DATA IN THE LISTData 1 = 34Data 2 = 25Data 3 = 16Data 4 = 7
