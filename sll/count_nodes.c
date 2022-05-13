#include "header.h"

int count_nodes(sll *ptr)
{
	int count = 0;
	if(ptr==0)
	{

		printf("no nodes are available\n");
		return 0;
	}
	while(ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return count;
}









