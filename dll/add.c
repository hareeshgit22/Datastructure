#include "header.h"
void add_begin(dll **head)
{
	dll *new;
	new = malloc(sizeof(dll));
	printf("Enter rollno name marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);

	new->next = *head;  //newly created next address is updated
	new->prev = 0; //newly created prev address is updated
	if(*head!=0)  //if headptr is not equal to zero.
		(*head)->prev=new; //update previous address of previous node.
	*head = new; //update headptr.
}

/************add at middle ****************/
void add_middle(dll **head)
{
	dll *new,*last;
	new = malloc(sizeof(dll));
	printf("enter the data\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	if(*head==0||new->rollno <(*head)->rollno){
		new->next=*head;
		new->prev=0;
		if(*head !=0)
			(*head)->prev=new;
		*head=new;
	}
	else
	{
		last=*head;
		while(last->next!=0 && last->next->rollno < new->rollno)
			last=last->next;

		new->next=last->next;
		new->prev=last;
		if(last->next!=0)
			last->next->prev=new;
		last->next=new;

	}
}









/**********************add at end **********/

void add_end(dll **head)
{
	dll *new,*last;

	new = malloc(sizeof(dll));
	printf("Enter the rollno name marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	new->next=0;    //newly created next address is always zero.
	if(*head==0)
	{
		new->prev=0;  //newly created first node of prev address is always zero.
		*head = new;  //first node we updated to headpointer.

	}
	else
	{
		last=*head;
		while(last->next!=0)
			last = last->next;

		new->prev=last;
		last->next = new;

	}
}











