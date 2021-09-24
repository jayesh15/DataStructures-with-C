#include <stdio.h>
#define max 20
int data[max], topA =-1, topB=max;

void pushA(int x)
{
    if(topA==topB-1)
        printf("\n overflow");
    else
    {
        topA++;
        data[topA] =x;
    }
}

int popA()
{
    int x;
    if(topA==-1)
    {
        printf("\nStack underflow");
        x =999;
    }
    else
    {
        x = data[topA];
        topA--;
    }
        return x;
}


void display_stackA()
{
int i;
if(topA == -1)
    printf("\n stack is empty");
else
    {
        for(i=topA; i>=0; i--)
        {
            printf("\t %d ",data[i]);
        }
    }
}

void pushB(int x)
{
    if(topB-1==topA)
        printf("\n stack overflow");
    else
        {
            topB--;
            data[topB] =x;
        }
}
int popB()
{
    int x;
    if(topB==max)
    {
        printf("\nStack underflow");
        x =999;
    }
    else
    {
        x = data[topB];
        topB++;
    }
    return x;
}

void display_stackB()
{
    int i;
    if(topB == max)
        printf("\n stack B is empty");
    else
    {
        for(i=topB; i<max; i++)
        {
            printf("\t %d ",data[i]);
        }
    }
}

int main()
    {
    int x,op;
    do
    {
         printf("\n\t\t\tImplementation of Stack using multiple stack \n\n\n");
         printf("1)Push in stack A\n");
         printf("2)Push in stack B\n");
         printf("3)Pop in stack A\n");
         printf("4)Pop in stack B\n");
         printf("5)Display in stack A\n");
         printf("6)Display in stack B\n");
         printf("7)Quit\n");
         printf("Enter your choice :");
         scanf("%d",&op);
         switch(op)
         {
         case 1:
        printf("\nEnter a number to push in stack A :");
        scanf("%d",&x);
        pushA(x);
        break;
         case 2:
        printf("\nEnter a number to push in stack B :");
        scanf("%d",&x);
        pushB(x);
        break;
         case 3:
        x = popA();
        if(x!= 999)
        printf("value popped from stack A is %d", x);
        break;
         case 4:
        x = popB();
        if(x!= 999)
        printf("value popped from stack B is %d", x);
        break;
         case 5:
        printf("\ncontents of Stack A are: \n");
        display_stackA();
        break;
         case 6:
        printf("\ncontents of Stack B are: \n");
        display_stackB();
        break;
         case 7: break;
         default:printf("Invalid choice...");
    }
    }while(op!=7);
     return 0;
}