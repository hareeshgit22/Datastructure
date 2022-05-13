#include "header.h"

void add_begin(sll**head)
{
	sll *new;
	new = malloc(sizeof(sll));
	printf("Enter the rollno,name,marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	new->next=*head;
	*head=new;
}

/*__________________________add_middle____________________*/

void add_middle(sll **head)
{
	sll *new,*last;
	new=malloc(sizeof(sll));//memory created
	printf("Enter the rollno name marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);

	if(*head==0||((*head)->rollno >new->rollno))
	{
		new->next=*head; //newly created node next address will modify
		*head=new; //headpointer will modify
	}
	else
	{
		last=*head; //last pointer pointing to starting position.
		while((last->next!=0)&&last->next->rollno < new->rollno)
			last=last->next;

		new->next = last->next;
		last->next = new;
	}
}

/*________________add_end__________*/

void add_end(sll **head){
	sll *last,*new;
	new=malloc(sizeof(sll));
	printf("Enter rollno name marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	new->next = 0;
	if(*head==0)
		*head = new;
	else
	{
		last = *head;
		while(last->next!=0)
			last = last->next;

		last->next=new;

	}
}


















