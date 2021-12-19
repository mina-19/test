#include<stdio.h>
#include<string.h>

char * mystrrev(char s[]){
//printf("%d",strlen(s));
int i;

for(i=0;i<strlen(s)/2;i++){

char c;
c=s[i];
s[i]=s[strlen(s)-1-i];
s[strlen(s)-1-i]=c;

}

return s;

}
void main(){

char s[100],*s1;
scanf("%s",s);

s1=mystrrev(s);

printf("%s",s1);


}
