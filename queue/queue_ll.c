#include <stdio.h>
#include <stdlib.h>
void enqueue();
void dequeue();
void display();

typedef struct QUEUE
{
	int num;
	struct QUEUE *next;
}queue;

queue *headptr=0;
void main(){
	int op;
	while(1){
		printf("enter your choice\n");
		printf("1)enqueue 2)dequeue 3)display 4)exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:display();break;
			case 4:exit(0);break;
			default : printf("unknown choice\n");
		}
	}

}
void enqueue()
{
	queue *new=malloc(sizeof(queue));
	printf("enter the num to store\n");
	scanf("%d",&new->num);
	
	queue *last;
	new->next=0;
	if(headptr==0)
	headptr=new;
	else{
	last=headptr;
	while(last->next!=0)
		last=last->next;
	last->next=new;
	
	}
}

void display()
{
	if(headptr==0)
	{
		printf("queue is empty\n");

	}
	else
	{
		queue *temp;
		temp=headptr;
		while(temp)
		{
			printf("%d ",temp->num);
			temp=temp->next;
		}
		printf("\n");	
	}
}
void dequeue(){
	if(headptr==0)
		printf("queue is underflow\n");
	else
	{
		queue *del=headptr;
		printf("deleted number: %d\n",del->num);
		headptr=headptr->next;
		free(del);
	}
}

