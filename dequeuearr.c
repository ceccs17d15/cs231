Athira Suresh
Roll no:15

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


#define CAPACITY 100

int queue[CAPACITY];
unsigned int size  = 0;
unsigned int rear  = CAPACITY - 1;   
unsigned int front = 0;
int#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


#define CAPACITY 100

int queue[CAPACITY];
unsigned int size  = 0;
unsigned int rear  = CAPACITY - 1;  
unsigned int front = 0;

int enqueue(int data);
int dequeue();
int isFull();
int isEmpty();
int getRear();
int getFront();

int main()
{
    int ch, data;
    while (1)
    {
        printf("  QUEUE ARRAY IMPLEMENTATION PROGRAM  \n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Size\n");
        printf("4. getRear\n");
        printf("5. getFront\n");
        printf("0. Exit\n");
        printf("Select an option ");

        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("Enter data to enqueue ");
                scanf("%d", &data);
                if (enqueue(data))
                    printf("Element added to queue");
                else
                    printf("Queue is full");

                break;

            case 2:
                data = dequeue();

                if (data == INT_MIN)
                    printf("Queue is empty.");
                else
                    printf("Data => %d", data);

                break;

            case 3: 

                if (isEmpty())
                    printf("Queue is empty");
                else 
                    printf("Queue size => %d", size);

                break;

            case 4: 

                if (isEmpty())
                    printf("Queue is empty");
                else 
                    printf("Rear => %d", getRear());

                break;

            case 5: 

                if (isEmpty())
                    printf("Queue is empty.");
                else 
                    printf("Front => %d", getFront());

                break;

            case 0:
                printf("Exiting from app");
                exit(0);
        
            default:
                printf("Invalid choice, please input number between (0-5).");
                break;
        }
    }
}

int enqueue(int data)
{
   
    if (isFull()) 
    {
        return 0;
    }
    rear = (rear + 1) % CAPACITY;
    size++;

    queue[rear] = data;
    return 1;
}

int dequeue()
{
    int data = INT_MIN;

    if (isEmpty())
    {
        return INT_MIN;
    }

 
    data = queue[front];
    front = (front + 1) % CAPACITY;
    size--;

    return data;
}

int isFull()
{
    return (size == CAPACITY);
}

int isEmpty()
{
    return (size == 0);
}

int getFront()
{
    return (isEmpty())
            ? INT_MIN
            : queue[front];
}

int getRear()
{
    return (isEmpty())
            ? INT_MIN
            : queue[rear];
}
output:
OUTPUT:


	    Queue using array
	1.Enqueue Front
	2.Enqueue Rear
	3.Dequeue Front
	4.Dequeue Rear
	5.Display
	6.Exit
	Enter your choice : 1
	Enter data to be inserted : 3

		Queue using array
	1.Enqueue Front
	2.Enqueue Rear
	3.Dequeue Front
	4.Dequeue Rear
	5.Display
	6.Exit
	Enter your choice : 1
	Failed: No space at front

		Queue using array
	1.Enqueue Front
	2.Enqueue Rear
	3.Dequeue Front
	4.Dequeue Rear
	5.Display
	6.Exit
	Enter your choice : 4
	Deleted element : 3

		Queue using array
	1.Enqueue Front
	2.Enqueue Rear
	3.Dequeue Front
	4.Dequeue Rear
	5.Display
	6.Exit
	Enter your choice : 2
	Enter data to be entered : 4

		Queue using array
	1.Enqueue Front
	2.Enqueue Rear
	3.Dequeue Front
	4.Dequeue Rear
	5.Display
	6.Exit
	Enter your choice : 5
	4

		Queue using array
	1.Enqueue Front
	2.Enqueue Rear
	3.Dequeue Front
	4.Dequeue Rear
	5.Display
	6.Exit
	Enter your choice : 3
	Deleted element : 4

		Queue using array
	1.Enqueue Front
	2.Enqueue Rear
	3.Dequeue Front
	4.Dequeue Rear
	5.Display
	6.Exit
	Enter your choice : 5
	Empty Queue

		Queue using array
	1.Enqueue Front
	2.Enqueue Rear
	3.Dequeue Front
	4.Dequeue Rear
	5.Display
	6.Exit
	Enter your choice : 1
	Enter data to be inserted : 5

		Queue using array
	1.Enqueue Front
	2.Enqueue Rear
	3.Dequeue Front
	4.Dequeue Rear
	5.Display
	6.Exit
	Enter your choice : 2
	Enter data to be entered : 5

		Queue using array
	1.Enqueue Front
	2.Enqueue Rear
	3.Dequeue Front
	4.Dequeue Rear
	5.Display
	6.Exit
	Enter your choice : 2
	Enter data to be entered : 6

		Queue using array
	1.Enqueue Front
	2.Enqueue Rear
	3.Dequeue Front
	4.Dequeue Rear
	5.Display
	6.Exit
	Enter your choice : 5
	5
	5
	6

		Queue using array
	1.Enqueue Front
	2.Enqueue Rear
	3.Dequeue Front
	4.Dequeue Rear
	5.Display
	6.Exit
	Enter your choice : 4
	Deleted element : 6

		Queue using array
	1.Enqueue Front
	2.Enqueue Rear
	3.Dequeue Front
	4.Dequeue Rear
	5.Display
	6.Exit
	Enter your choice : 5
	5
	5

		Queue using array
	1.Enqueue Front
	2.Enqueue Rear
	3.Dequeue Front
	4.Dequeue Rear
	5.Display
	6.Exit
Enter your choice : 6
