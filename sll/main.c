#include "header.h"

void main()
{
	int op,c;
	sll *headptr=NULL; //headptr pointing to zero
	while(1)
	{
		printf("Enter your choice\n");
		printf("1)add_begin 2)add_middle 3)add_end 4)print_records 5)count_nodes 6)save_file 7)read_file 8)reverse_links 10)exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: add_begin(&headptr); break;
			case 2: add_middle(&headptr); break;
			case 3: add_end(&headptr); break;
			case 4: print_data(headptr); break;
			case 5: c = count_nodes(headptr);
				printf("Total nodes: %d\n",c);break;
			case 6: save_file(headptr);break;
			case 7: read_file(&headptr);break;
			case 8: reverse_link(&headptr);break;
			case 10: exit(0);
			default: printf("unknown option\n");

		}
	}
}






