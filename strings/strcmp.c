#include<stdio.h>
#include<string.h>

int mystrcmp(char *s1,char *s2){

int res;
while(*s1!='\0' && *s2!='\0'){

if(*s1<*s2)
	return (*s1 - *s2);
else if(*s1>*s2)
	return (*s1 - *s2);
else{
s1++;s2++;
}

}
if(*s1 == '\0' && *s2 == '\0')
 return 0;
	
else
	return (*s1 - *s2);

}

void main(){

char s1[100],s2[100];
int n;
scanf("%s",s1);
scanf("%s",s2);

n=mystrcmp(s1,s2);
printf("%d\n",n);


}
