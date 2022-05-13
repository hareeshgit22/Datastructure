#include "header.h"
void reverse_link(sll **head){
if(*head==0)
{
printf("No nodes available\n");
return;
}
sll *prv,*cur,*next;
cur=*head;  //p pointing to first node.
prv=NULL;
next=NULL;
while(cur)
{
next=cur->next;
cur->next=prv;
prv=cur;
cur=next;
}
*head=prv;
}
