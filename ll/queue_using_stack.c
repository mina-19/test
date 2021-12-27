#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node *next;

};
typedef struct node NODE;

void push(NODE **h,int d){
NODE *tmp=(NODE *)malloc(sizeof(NODE));
tmp->data=d;
if(!*h)
	tmp->next=NULL;
	
else
	tmp->next=*h;
*h=tmp;
}
void pop(NODE **h){
if(*h){

NODE *tmp=*h;
*h=(*h)->next;
free(tmp);
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
void enqueue(NODE **h,int d){

push(h,d);

} 
void dequeue(NODE **h){

NODE *h2=NULL,*tmp=*h;
while(tmp){
push(&h2,tmp->data);
pop(h);
tmp=tmp->next;
}
printf(" pop element:%d\n",h2->data);
pop(&h2);
tmp=h2;
while(tmp){
push(h,tmp->data);
tmp=tmp->next;
}
}
void main(){

NODE *h=NULL,*h2=NULL;
int i;
for(i=100;i<600;i+=100)
enqueue(&h,i);
//push(&h,i);
display(&h);
dequeue(&h);
display(&h);
}
