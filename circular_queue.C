#include <stdio.h>
#define max 5
int data[max];
int front=-1, rear = -1;
void enqueue(void);
int dequeue(void);
int peek(void);
void display(void);
void main()
{
int x,op;
do
 {
 printf("\n\t\t\tImplementation of circular queue \n\n\n");
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
 getch();
}

void enqueue()
	{

	int x;
	printf("enter the number to be inserted in the queue: ");
	scanf("%d", &x);


	if(front==(rear+1)%max)
		{
		printf("\noverflow");
		}



	else if(front == -1 && rear == -1)
		{
		front = rear = 0;
		data[rear]=x;
		}


	else
		{
		rear= (rear+1)%max;
		data[rear]=x;
		}
	}


int dequeue()
{
	int x;
	if(rear == -1)
		{
			printf("\nunderflow");
			return -1;
		}

	else
		{
			x = data[front];

			front=(front+1)%max;

			if(front==(rear+1)%max)
			front = rear = -1;
			return x;
		}
	}

int peek()
{
	
	if(rear == -1)
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
	if(rear == -1)
		{
		printf("\nqueue is empty");
		}
		
	else
		{
			for(i=front; i!= rear; i=(i+1)%max)
			{
				printf("\t %d", data[i]);
			}
				printf("\t %d", data[rear]);
		}
}
