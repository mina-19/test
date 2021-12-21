#include<stdio.h>
#include<string.h>
char *mystrcat(char *dst,char *src){

int i,j=0,len=strlen(dst);
for(i=len;src[j];i++){
	dst[i]=src[j];
	j++;

}
dst[i]='\0';
return dst;

}
void main(){
char s1[50],s2[10],*p;
scanf("%s",s1);
scanf("%s",s2);
p=mystrcat(s1,s2);
printf("%s\n",p);
}
