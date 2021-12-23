#include<stdio.h>
#include<stdlib.h>
struct node{

int data;
struct node *next;

};
typedef struct node NODE;


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
void createloop(NODE **h){

NODE *p=NULL,*q=NULL;
p=*h;
p=p->next->next;
q=p;
while(p->next!=NULL)
	p=p->next;
p->next=q;
}
void removeloop(NODE **h){

NODE *f=NULL,*s=NULL;
f=s=*h;
int lenofloop=1;
f=f->next->next;
s=s->next;
while(f!=s){
f=f->next->next;
s=s->next;
}
while(s->next!=f){
	s=s->next;
	lenofloop++;
	}
s=f=*h;
while(--lenofloop)
	f=f->next;
while(f->next!=s){

s=s->next;
f=f->next;
}
f->next=NULL;
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

void main(){

NODE *head=NULL;
int i;
for(i=100;i<700;i+=100)
	append(&head,i);
display(&head);
createloop(&head);
//display(&head);
removeloop(&head);
display(&head);
}
