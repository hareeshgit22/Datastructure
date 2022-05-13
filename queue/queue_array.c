#include<stdio.h>
#include<stdlib.h>
void enqueue();
void display();
void dequeue();
int a[5],TOP=-1;
void main()
{

	int op;
	while(1){
		printf("enter your choice\n");
		printf("1)push 2)pop 3)display 4)exit\n");
		scanf("%d",&op);
		switch(op){
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:display();break;
			case 4:exit(0);break;
			default: printf("unknown option\n");
		}
	}
}

void enqueue(){
	int num;


	if(TOP>=4)
		printf("queue is overflow\n");


	else
	{

		TOP++;
		printf("enter number to store in queue\n");
		scanf("%d",&num);

		a[TOP]=num;

	}
}

void display()
{
	int i=0;
	if(TOP==-1)
	{
		printf("queue is empty\n");
		return;
	}
	else{
		for(i=0; i<=TOP; i++)
			printf("%d ",a[i]);
		printf("\n");
	}
}

void dequeue()
{
int i;	
if(TOP<=-1)
	{
		printf("queue is underflow\n");
		return;
	}
	int num;
	num=a[0];
	printf("Deleted number:%d\n",num);
for(i=0; i<TOP; i++)	
a[i]=a[i+1];
TOP--;
}








