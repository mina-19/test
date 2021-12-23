#include<stdio.h>
#include<stdlib.h>
struct node{

int data;
struct node *next;

};
typedef struct node NODE;

void addatbeg(NODE **q,int d){

NODE *tmp=(NODE *)malloc(sizeof(NODE));
tmp->data=d;
if(!*q){
	*q=tmp;
	tmp->next=NULL;
	}
else{
	tmp->next=*q;
	*q=tmp;
     }
}
void append(NODE **q,int d){

NODE *ptr=NULL;
NODE *tmp= (NODE *)malloc(sizeof(NODE));
tmp->data=d;
tmp->next=NULL;
if(!*q)
	*q=tmp;
	
else{
	ptr=*q;
	while(ptr->next!=NULL)
		ptr=ptr->next;
	ptr->next=tmp;		

    }
}
void delete(NODE **q,int index){

if(*q){
NODE *cur=NULL,*prev=NULL;
cur=*q;
if(index==1){

*q=cur->next;
free(cur);
}
else{
while(--index){
	
	prev=cur;	
	cur=cur->next;	
	
	     }

prev->next=cur->next;
free(cur); 
}
}
}
void display(NODE **q){

if(*q){
NODE *p=NULL;
p=*q;
while(p!=NULL)
{
	printf("%d\t",p->data);
	p=p->next;
}
printf("\n");
}
}
void reversell(NODE **q){

NODE *cur=NULL,*prev=NULL,*p=NULL;
cur=*q;
while(cur!=NULL){
prev=cur;
cur=cur->next;
prev->next=p;
p=prev;
}
*q=prev;
}
void main(){

NODE *head=NULL;
int i;
for(i=100;i<600;i+=100)
	append(&head,i);
display(&head);
//delete(&head,5);
reversell(&head);
display(&head);

}
