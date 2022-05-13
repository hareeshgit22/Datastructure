#include "header.h"
void print_data(sll *ptr)
{
	if(ptr==0)
	{

		printf("no records available\n");
		return;
	}
	while(ptr)
	{
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr = ptr->next;

	}
}













