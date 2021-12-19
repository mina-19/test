#include<stdio.h>


void main(){
int a,i,n;
scanf("%d",&n);

//for(i=0;i<=15;i++)

for(i=0;i<=(sizeof(int)*8)-1;i++)
{
a=n&(1<<i)? 1:0;
printf("%d",a);

}
}

