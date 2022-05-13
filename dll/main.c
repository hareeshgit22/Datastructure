#include "header.h"

int main()
{
	dll *headptr=0;
	int op,c=0;
	while (1){
		printf("Enter your choice\n");
		printf("1)add_begin 2)add_middle 3)add_end 4)print_data 5)count_nodes 6)save_data 7)read_file 10)exit\n");
		scanf("%d",&op);

		switch(op){
			case 1: add_begin(&headptr);break;
			case 2: add_middle(&headptr);break;
			case 3: add_end(&headptr);break;
			case 4: print_data(headptr); break;
			case 5: c=count_nodes(headptr);
				printf("Total number of nodes=%d\n",c);break;
			case 6: save_file(headptr);break;
			case 7: read_file(&headptr);break;	
			case 10:exit(0);
			default :printf("unknown choice\n");

		}
	}
}


