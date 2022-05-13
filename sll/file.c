#include "header.h"

void read_file(sll **head){
	FILE *fp = fopen("student.txt","r");
	while(1){
		sll *new = malloc(sizeof(sll));
		if(fscanf(fp,"%d %s %f\n",&new->rollno,new->name,&new->marks)==-1)
		{
			free(new);
			break;
		}
		new->next=*head;
		*head=new;
	}
}

/*________________save_record___________*/

void save_file(sll *ptr)
{
	if(ptr==0)
	{

		printf("no records available\n");
		return;
	}
	FILE *fp = fopen("student.txt","a");
	while(ptr)
	{
		fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr = ptr->next;

	}
}



