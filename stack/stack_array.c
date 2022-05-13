#include<stdio.h>
#include<stdlib.h>
void push();
void display();
void pop();
int a[5],TOP=-1;
void main()
{

	int op;
	while(1){
		printf("enter your choice\n");
		printf("1)push 2)pop 3)display 4)exit\n");
		scanf("%d",&op);
		switch(op){
			case 1:push();break;
			case 2:pop();break;
			case 3:display();break;
			case 4:exit(0);break;
			default: printf("unknown option\n");
		}
	}
}

void push(){
	int num;


	if(TOP>=4)
		printf("stack is overflow\n");


	else
	{

		TOP++;
		printf("enter number to store in stack\n");
		scanf("%d",&num);

		a[TOP]=num;

	}
}

void display()
{
	int i=0;
	if(TOP==-1)
	{
		printf("stack is empty\n");
		return;
	}
	else{
		for(i=0; i<=TOP; i++)
			printf("%d ",a[i]);
		printf("\n");
	}
}
void pop()
{
	if(TOP<=-1)
	{
		printf("stack is underflow\n");
		return;
	}
	int num;
	num=a[TOP];
	printf("Deleted number:%d\n",num);
	TOP--;
}








