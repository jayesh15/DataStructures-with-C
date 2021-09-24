#include <stdio.h>
#define max 10
int data[max];
int front=-1, rear = -1;
void enqueue(void);
int dequeue(void);
int peek(void);
void display(void);
int main()
{
int x,op;
do
 {
     printf("\n\t\t\tImplementation of linear queue \n\n\n");
     printf("1)insert an element\n");
     printf("2)delete an element\n");
     printf("3)Peek\n");
     printf("4)Display the queue\n");
     printf("5)Quit\n");
     printf("Enter your choice :");
     scanf("%d",&op);
     switch(op)
     {
     case 1:
    enqueue();
    break;
     case 2:
    x = dequeue();
    if(x!=-1)
    printf("the number deleted is %d", x);
    break;
     case 3:
    x = peek();
    if(x!= -1)
    printf("the first value in queue is %d", x);
    break;
     case 4:
    display();
    break;
     case 5: break;
     default:printf("Invalid choice...");
     }
     }while(op!=5);
     return 0;
}


void enqueue()
{
    int x;
    printf("enter the number to be inserted in the queue: ");
    scanf("%d", &x);
    if(rear == max-1)  //limited reached 
    {
        printf("\nqueue is overflowing");
    }
    else if(front == -1 && rear == -1)  // initial condiiton when both f and r where on 0
    {
        front = rear = 0;
    }
    else // normal condition 
    {
        rear++;
    }

    data[rear]=x;
}


int dequeue()
{
    int x;
    if(front == -1 || front>rear)
    {
        printf("\nunderflow");
        return -1;
    }
    else
    {
        x = data[front];
        front++;
        if(front > rear)
            front = rear = -1;
        return x;
}
}

int peek()
{
    if(front == -1 || front>rear)
    {
        printf("\nqueue is empty");
        return -1;
    }
    else
    {
        return data[front];
    }
}


void display()
{
    int i;
    printf("\n");
    if(front == -1 || front >rear)
    {
        printf("\nqueue is empty");
    }
    
    else
    {
    for(i=front; i<= rear; i++)
        {
        printf("\t %d", data[i]);
        }
    }
}
