#include<stdio.h>

int mystrncmp(char *s1,char *s2,int n){

int res;
while(n && *s1 && *s2 ){
if(*s1<*s2 | *s1>*s2)
	return (*s1-*s2);
else {
	s1++; s2++; n--;
}
}
if(n==0)
	return 0;
else
	return (*s1-*s2);
	

}

void main(){

char s1[100],s2[100];
int n;
scanf("%s",s1);
scanf("%s",s2);
scanf("%d",&n);

n=mystrncmp(s1,s2,n);
printf("%d\n",n);


}
