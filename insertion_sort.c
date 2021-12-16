#include<stdio.h>

int * insertionsort(int *a,int n){
int i,j,tmp;
for(i=1;i<n;i++){
tmp=a[i];
j=i-1;
while(a[j]>tmp && j>=0){
	a[j+1]=a[j];
	j--;

	}
a[j+1]=tmp;
}
return a;
}

void main(){

int n,i,*a;
printf("enter array size\n");
scanf("%d",&n);
int arr[n];
printf("enter array elem\n");

for(i=0;i<n;i++)
scanf("%d",&arr[i]);

a=insertionsort(arr,n);
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
