#include <stdio.h>
#include <stdlib.h>


typedef struct stack
{
    int data;
    struct stack *next;
}stack;


stack *top = NULL;


stack *pop(stack *);
stack *push(stack *,int);
void display(stack *);
int peek(stack *);


int main()
{
    int x,op;
    do
     {
     printf("\n\t\t\tImplementation of Stack using Linked List\n\n\n");
     printf("1)Push\n");
     printf("2)Pop\n");
     printf("3)Peek\n");
     printf("4)Display\n");
     printf("5)Quit\n");
     printf("Enter your choice :");
     scanf("%d",&op);
     switch(op)
     {
     case 1:
        printf("\nEnter a number :");
        scanf("%d",&x);
        top = push(top,x);
        break;

     case 2:
        top=pop(top);
        break;

     case 3:
        x = peek(top);
        if(x!= -1)
            printf("value at top is %d", x);
        else
            printf("Stack is empty");
        break;

     case 4:
        display(top);
        break;

     case 5:
        break;

     default:printf("Invalid choice...");
     }
     }while(op!=5);
     return 0;
    }

    int peek(stack *top)
        {
            if(top==NULL)
                return(-1);

            else
                return(top->data);
        }



    stack *push(stack *top,int x)
        {
            stack *p;
            p=(stack *)malloc(sizeof(stack));

            p->data=x;
            p->next=top;

            top=p;

            return top;
        }


    stack *pop(stack *top)
        {
            stack *p;
            p=top;


            if(top==NULL)
                printf("\nStack underflow");

            else
                {
                    top = top->next;
                    printf("\nthe value being deleted is :%d", p->data);
                    free(p);
                }


            return top;
        }


    void display(stack *top)
        {
            stack *p;
            p = top;


            if(top == NULL)
                printf("\n stack is empty");

            else
                {
                    while(p!=NULL)
                        {
                            printf("%d ",p->data);
                            p=p->next;
                        }
                }
}