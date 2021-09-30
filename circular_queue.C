#include<stdlib.h>
#include<stdio.h>

typedef struct dnode
{
	int data;
	struct dnode *next, *prev;
}dnode;

dnode *create();
void print_forward(dnode *);
void print_reverse(dnode *);

int main()
{
	dnode *head;
	head=NULL; //initially the list is empty
	head=create();
	printf(“\nElements in forward direction : ”);
	print_forward(head);
	printf(“\nElements in reverse direction : ”);
	print_reverse(head);
	return 0;
}

dnode *create()
{
	dnode *h, *P, *q;
	int i, n ,x;
	h=NULL;
	printf(“\nEnter no of elements: ”);
	scanf(“%d”, &n);
	for(i=0;i<n;i++)
		{
			printf(“\nEnter next data: ”);
			scanf(“%d”, &x);
			q = (dnode *)malloc(sizeof(dnode));
			q-> data=x;
			q->prev=q->next=NULL;

			if(h==NULL)
				P =h=q;
			else
				P->next=q;
			q->prev=P;
			P =q;
		}
	return(h);
}


void print_forward(dnode *h)
	{
	while(h!=NULL)
	{
		printf(“<- %d ->”, h->data);
		h=h->next;
	}
}

void print_reverse(dnode *h)
{
	while(h->next!=NULL)
	h=h->next;
		while(h!=NULL)
		{
			printf(“<- %d ->”, h->data);
			h=h->prev;
		}
}
