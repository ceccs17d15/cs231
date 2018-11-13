#include<stdio.h>
#include<stdlib.h>

struct linked_list{
    int number;
    struct linked_list *next;
    struct linked_list *previous;
};

typedef struct linked_list node;
node *head = NULL, *tail = NULL;

void insert_at_head(int number);
void insert_at_tail(int number);
void insert_at_middle(int number, int position);
int getListLength();

int main()
{
    int a = 5, b = 15, c = 43, d = 23, e = 12, f = 66, g = 99, h =65, i = 20, j = 8;
    int pos = 2, insertMidValue = 500;

    printf("Insert at head: %d\n", a);
    insert_at_head(a);


    printf("Insert at tail: %d, %d, %d\n", b, c, d);
    insert_at_tail(b);
    insert_at_tail(c);
    insert_at_tail(d);
  

    printf("Insert at head: %d\n", e);
    insert_at_head(e);
  

    printf("Insert at POSITION: %d, VALUE: %d\n", pos, insertMidValue);
    insert_at_middle(insertMidValue, pos);

    printf("Insert at tail: %d, %d, %d", f, g, h);
    insert_at_tail(f);
    insert_at_tail(g);
    insert_at_tail(h);
    return 0;
}
void insert_at_head(int number)
{
    node *newNode = (node *) malloc(sizeof(node));

    newNode->number = number;
    newNode->next = newNode;
    newNode->previous = newNode;

    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        newNode->previous = tail;
        head->previous = newNode;
        tail->next = newNode;
        head = newNode;
    }

}
void insert_at_tail(int number)
{
    node *newNode = (node *) malloc(sizeof(node));

    newNode->number = number;
    newNode->next = newNode;
    newNode->previous = newNode;

    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->next = head;
        newNode->previous = tail;
        tail = newNode;
        head->previous = tail;
    }
}
void insert_at_middle(int number, int position)
{
    if(position==1)
    {
        insert_at_head(number);
        return;
    }
    else if(position>1 && head!=NULL)
    {
        node *current = head;
        node *temp = (node *) malloc(sizeof(node));
        int count = 0;

        do
        {
            count++;
            temp = current;
            current = current->next;
        }   while(current->next != head && count<position-1);

        if(count==position-1)
        {
            if(temp==tail)
                insert_at_tail(number);
            else
            {
                node *newNode = (node *) malloc(sizeof(node));
                newNode->number = number;

                temp->next = newNode;
                newNode->next = current;
                newNode->previous = temp;
                current->previous = newNode;

            }
            return;
        }

    }

    printf("Position does not exist!\n");
}
int getListLength()
{
    if(head==NULL) return 0;

    int count = 0;
    node *current = head;

    do
    {
        count++;
        current = current->next;
    }   while(current != head);

    return count;
}
