#include<stdio.h>
void swap(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;

}
int partition(int a[],int low,int high){

int pivot,tmp,l,h;
pivot=a[low];
l=low;
h=high;
while(l<h){

while(a[l]<=pivot)
l++;

while(a[h]>pivot)
h--;

if(l<h){
swap(&a[l],&a[h]);
}
}
swap(&a[low],&a[h]);

return h;

}

void quicksort(int a[],int l,int h){
int p;
if(l<h){
	p=partition(a,l,h);
	quicksort(a,l,p-1);
	quicksort(a,p+1,h);
	}

}

void main(){

int n,i,*a;
printf("enter array size\n");
scanf("%d",&n);
int arr[n];
printf("enter array elem\n");

for(i=0;i<n;i++)
scanf("%d",&arr[i]);

quicksort(arr,0,n-1);
for(i=0;i<n;i++)
printf("%d",arr[i]);

}
