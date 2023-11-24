#include <stdio.h>
#include<stdlib.h>
#define MAX_SIZE 3
int queue[MAX_SIZE];
int front = -1, rear = -1;
void enqueue(int data)
{
if(front==0 && rear==MAX_SIZE-1)  //||(rear==front-1)
{
printf("\nQueue is full\n");
    }
    else
     {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % MAX_SIZE;
        queue[rear] = data;
        printf("%d has been enqueued.\n", data);
     }
}

int dequeue()
{
    int data;
    if(front==-1)
    {
    printf("Queue empty\n");
    }
   else
    {
        data = queue[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % MAX_SIZE;
        }
        printf("%d has been dequeued\n",data);
        //return data;
    }
    return 0;
}

void display()
{
    int i;
    if(front==-1)
    {
    printf("Queue is empty\n");
    }
    else
    {
        printf("\n\nQueue elements: ");
        for (i = front; i != rear; i = (i + 1) % MAX_SIZE)
        {
            printf("%d ", queue[i]);
        }
        printf("%d\n", queue[i]);
    }
}

int main()
{
    int choice, data;

    //while (1) {
        printf("\n Circular Queue Menu\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        do
        {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                dequeue();
                //if (data != -1)
                //printf("%d has been dequeued.\n", data);
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting the program.\n");
                exit(0);
               
            //default:
                //printf("Invalid choice. Please try again.\n");
        }
    }
    while(choice<4);

    return 0;
}
