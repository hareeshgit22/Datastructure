#include <stdio.h>
#include <stdlib.h>

//structure declaration.

typedef struct student
{
struct student *prev;
int rollno;
char name[20];
float marks;
struct student *next;
}dll;


void add_begin(dll**);
void add_middle(dll**);
void add_end(dll**);
void print_data(dll*);
int count_nodes(dll*);
void save_file(dll*);
void read_file(dll**);


