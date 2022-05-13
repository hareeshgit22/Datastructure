#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
int rollno;
char name[20];
float marks;
struct student *next; //address part

}sll;


void add_begin(sll**);
void add_middle(sll**);
void add_end(sll**);
void print_data(sll*);
int count_nodes(sll*);
void save_file(sll*);
void read_file(sll**);
void reverse_link(sll**);


