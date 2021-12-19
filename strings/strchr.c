#include<stdio.h>

char * mystrchr(char *s,char c){

while(s != NULL){

if(c==*s)
	return s;
s++;

}
if(s==NULL)
	return NULL;

}


void main(){

char s[100], c,*p;
fgets(s,100,stdin);
scanf("%c",&c);

p=mystrchr(s,c);
printf("%s",p);

}
