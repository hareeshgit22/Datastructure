#include "header.h"


int count_nodes(dll *ptr)
{
	int count=0;
	if(ptr==0)
	{

		printf("no nodes available\n");
		return 0;
	}
	while(ptr)
	{
		count++;
		ptr = ptr->next;

	}
	return count;
}
















