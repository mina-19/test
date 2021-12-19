#include<stdio.h>
#include<string.h>

int mystrcmp(char *s1,char *s2){

int res;
while(s1!=NULL && s2!=NULL){

if(s1<s2)
	return (*s1 - *s2);
else if(s1>s2)
	return (*s1 - *s2);
else{
s1++;s2++;
}

}
if(s1 == NULL && s2 == NULL)
 return 0;
else if(s1 == NULL)
	return (*s1 - *s2);
else
	return (*s1 - *s2);

}

void main(){

char s1[100],s2[100];
int n;
scanf("%s",s1);
scanf("%s",s2);

n=strcmp(s1,s2);
printf("%d\n",n);


}
