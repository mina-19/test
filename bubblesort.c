#include<stdio.h>

int * bubblesort(int *a,int n){

int i,j,tmp;

for(i=n-1;i>0;i--)
	for(j=0;j<i;j++){

	if(a[j]>a[j+1]){

		tmp=a[j];
		a[j]=a[j+1];
		a[j+1]=tmp;
	}


	}
//for(i=0;i<n;i++)
//printf("%d",a[i]);
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

a=bubblesort(arr,n);
for(i=0;i<n;i++)
printf("%d",a[i]);

}
