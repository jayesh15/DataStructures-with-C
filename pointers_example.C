#include<stdio.h>
int main()
{
	int a,b;
	void swap (int *p1, int *p2);
	clrscr();
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("In the main function before calling the swap function %d and %d\n",a,b);
	swap(&a,&b);
	printf("In main function after calling the swap function %d and %d\n",a,b);
	return 0;
}

void swap (int *p1, int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("In the swap function after swapping %d and %d\n",*p1,*p2);
}
