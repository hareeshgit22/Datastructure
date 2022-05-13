#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();

typedef struct STACK
{
	int num;
	struct STACK *next;
}stack;

stack *headptr=0;
void main(){
	int op;
	while(1){
		printf("enter your choice\n");
		printf("1)push 2)pop 3)display 4)exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:display();break;
			case 4:exit(0);break;
			default : printf("unknown choice\n");
		}
	}

}
void push()
{
	stack *new=malloc(sizeof(stack));
	printf("enter the num to store\n");
	scanf("%d",&new->num);

	new->next=headptr;
	headptr=new;
}

void display()
{
	if(headptr==0)
	{
		printf("stack is empty\n");

	}
	else
	{
		stack *temp;
		temp=headptr;
		while(temp)
		{
			printf("%d ",temp->num);
			temp=temp->next;
		}
		printf("\n");	
	}
}
void pop(){
	if(headptr==0)
		printf("stack is underflow\n");
	else
	{
		stack *del=headptr;
		printf("deleted number: %d\n",del->num);
		headptr=headptr->next;
		free(del);
	}
}
