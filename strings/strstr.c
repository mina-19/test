#include<stdio.h>

char * mystrstr(char *s,char *c){

char *ptr1=NULL,*ptr2=NULL;

while(*s){

ptr1=s;ptr2=c;

while(*s==*ptr2 && *s!='\0' && *c!='\0'){

s++; ptr2++;

}
if(*ptr2==*c)
	s++;
if(*ptr2=='\0'){
	//printf("%s",ptr1);
	s=ptr1;
	return s;}

}
return NULL;

}

void main(){

char s1[10],s2[10],*p=NULL;
scanf("%s",s1);
scanf("%s",s2);

p=mystrstr(s1,s2);
printf("%s",p);
}
