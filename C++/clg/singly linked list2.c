#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
void createlist(int data);
void addatbeg(int data);
void addafter(int data, int pos);
void del(int data);
void display();
void search(int data);
struct node
{
	int info;
	struct node *link;
}*start;

int main()
{
	int choice,n,m,position,i;
	start=NULL;
	while(1)
	{
		printf("1. Create List\n2. Add at begining\n3.Add After\n4.Delete\n5.Display\n6.Search\n7. Quit\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("How many nodes you want\n");
				scanf("%d",&n);
				for(i=0;i<n;i++)
				{
					printf("enter the element\n");
					scanf("%d",&m);
					createlist(m);
				}
				break;
			case 2:
				printf("enter the element\n");
					scanf("%d",&m);
					addatbeg(m);
					break;
			case 3:
				printf("enter the element\n");
					scanf("%d",&m);
					printf("enter the position after which the element is inserted");
					scanf("%d",&position);
					addafter(m,position);
					break;
			case 4:
				if(start==NULL)
				{
					printf("List is empty\n");
					continue;
				}
				printf("enter the element for delete\n");
				scanf("%d",&m);
				del(m);
				break;
			case 5:
				display();
				break;
			case 6:
				printf("enter the element for search\n");
					scanf("%d",&m);
					search(m);
					break;
			case 7:
				exit(1);
				break;
			default:
				printf("enter correct choice\n");
					
		}//end of switch
	}//end of while
	return 0;
}// end of main

void createlist(int data)
{
	struct node *q, *tmp;
	tmp = (struct node *) malloc(sizeof(struct node));
	tmp->info = data;
	tmp ->link = NULL;
	if(start==NULL)
	start=tmp;
	else
	{
		//element inserted at end
		q = start;
		while(q->link != NULL)
		q = q->link;
		q->link=tmp;
	}
}// end of create list

void addatbeg(int data)
{
	struct node *q, *tmp;
	tmp = (struct node *) malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=start;
	start=tmp;
}//end of addatbeg

void addafter(int data, int pos)
{
	struct node *tmp, *q;
	int i;
	q=start;
	for(i=1;i<pos; i++)
	{
		q=q->link;
		if(q==NULL)
		{
			printf("There are less than %d elements",pos);
			return;
		}
	}
	tmp= (struct node*) malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=q->link;
	q->link=tmp;
}// end of addafter

void del(int data)
{
	struct node *tmp,*q;
	if(start->info==data)
	{
		tmp=start;
		start=start->link;
		free(tmp);
		return;
	}
	q=start;
	while(q->link!=NULL)
	{
		if(q->link->info==data)
		{
			tmp=q->link;
			q->link=tmp->link;
			free(tmp);
			return;
		}
		q=q->link;
	}
	printf("Element %d is not found\n",data);
}//end of del

void display()
{
	struct node *q;
	if(start==NULL)
	{
		printf("List is empty\n");
		return;
	}
	q=start;
	printf("List elements are\n");
	while(q!=NULL)
	{
		printf("%d\t",q->info);
		q=q->link;
	}
	printf("\n");
}//end of display
 
void search(int data)
{
	struct node *q;
	int pos=1;
	q=start;
	while(q!=NULL)
	{
		if(q->info==data)
		{
			printf("Item %d found at position %d\n",data,pos);
			return;
		}
		q=q->link;
		pos++;
	}
	if(q==NULL)
	printf("Item %d is not found in the list\n",data);
}//end of search

