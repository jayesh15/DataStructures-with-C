#include<stdio.h>
#define max 10
int data[max], top = -1;
void push(int data[], int x);
int pop(int data[]);
int peek(int data[]);
void display(int data[]);
int main()
{
    int x, option;
    do
    {
    printf("\n*****Main Menu*****");
    printf("\n1. PUSH");

    printf("\n2. POP");
    printf("\n3. PEEK");
    printf("\n4. DISPLAY");
    printf("\n5. EXIT");
    printf("\nEnter your option");
    scanf("%d", &option);
    switch(option)
    {
        case 1:
        printf("\n enter a number");
        scanf("%d", &x);
        push(data, x);
        break;
        case 2:
        x = pop(data);
        if(x != -1)
        printf("\n the value deleted from the stack is %d", x);
        break;
        case 3:
        x = peek(data);
        if(x != -1)
        printf("\n the value stored at the top of stack is %d", x);
        break;
        case 4:
        display(data);
        break;
    }
    }while(option!=5);
     return 0;
    }

void push(int data[], int x)
    {
    if(top == max -1)
     printf("\n stack overflow");
    else
        {
        top++;
        data[top] = x;
        }
    }
int pop(int data[])
    {
        int x;
        if(top == -1)
            {
                 printf("\n stack underflow");
                 return -1;
            }
    else
            {
                x = data[top];
                top--;
                return x;
            }
    }

void display(int data[])
    {
    int i;
    if(top == -1)
        printf("\n stack is empty");
    else
        {
            for(i=top; i>=0; i--)
            printf("\n%d", data[i]);
        }
    }

int peek(int data[])
    {
    if(top == -1)
        {
             printf("\n stack is empty");
             return -1;
        }
    else
        {
            return (data[top]);
        }
}
