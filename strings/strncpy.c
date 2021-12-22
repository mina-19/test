#include<stdio.h>
//#include<string.h>
char *mystrncpy(char *dst,char *src,int n){

int i;
char *tmp=dst;
for(i=0;i<n && *src;i++){

*tmp=src[i];
tmp++;

}
*tmp='\0';
return dst;
}
void main(){

char s1[10],s2[10];
int n;
scanf("%s",s2);
scanf("%d",&n);
mystrncpy(s1,s2,n);
//strncpy(s1,s2,n);
printf("%s\n",s1);

}
