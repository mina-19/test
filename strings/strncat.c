#include<stdio.h>
#include<string.h>
char *mystrncat(char *dst,char *src,int n){

if(src==NULL || dst==NULL)
	return NULL;
int i,j=0;
for(i=strlen(dst);j<n;i++){
	dst[i]=src[j];
	j++;

}
dst[i]='\0';
return dst;

}
void main(){
char s1[10],s2[10],*p;
scanf("%s",s1);
scanf("%s",s2);
p=strncat(s1,s2,4);
printf("%s\n",p);
}
