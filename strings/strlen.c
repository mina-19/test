#include<stdio.h>

size_t mystrlen(char *s){
size_t len=0;
while(*s){
len++;
s++;
}
return len;
}


void main(){

char s[10];
scanf("%s",s);
printf("%zd\n",mystrlen(s));
}
