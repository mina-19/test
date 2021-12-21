#include<stdio.h>

char *mystrcpy(char *dst,char *src){

char *tmp;
tmp=dst;
while(*src){

*tmp=*src;
src++; tmp++;

}
*tmp='\0';
return dst;

}
void main(){
char s1[10],s2[10],*p;

scanf("%s",s2);
mystrcpy(s1,s2);
printf("%s\n",s1);

}
