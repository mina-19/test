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
void nth_node(NODE **h,int n){

NODE *p=NULL,*q=NULL;
p=q=*h;
printf("%dth node is",n); 
while(--n)
	p=p->next;
while(p->next!=NULL){
	p=p->next;
	q=q->next;
}
printf("%d",q->data);
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
int i,n;
for(i=100;i<600;i+=100)
	append(&head,i);
display(&head);
scanf("%d",&n);
nth_node(&head,n);
}
