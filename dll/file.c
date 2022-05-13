#include "header.h"

void read_file(dll **head){
	FILE *fp = fopen("student.txt","r");
	while(1){
		dll *new = malloc(sizeof(dll));
		if(fscanf(fp,"%d %s %f\n",&new->rollno,new->name,&new->marks)==-1)
		{
			free(new);
			break;
		}
		new->next=*head;
		new->prev=0;
		*head=new;

	}
}

/*________________save_record___________*/

void save_file(dll *ptr)
{
	if(ptr==0)
	{

		printf("no records available\n");
		return;
	}
	FILE *fp = fopen("student.txt","w");
	while(ptr)
	{
		fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr = ptr->next;

	}
}













