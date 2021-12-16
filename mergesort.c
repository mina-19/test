#include<stdio.h>


void merge(int a[],int low,int m, int high){

int i=low,j=m+1,k=low;
int arr[high-low+1];
while(j<=high && i<=m){

if(a[i]<=a[j]){
	arr[k]=a[i];
	i++;
	k++;
	}
else{
	arr[k]=a[j];
	j++;
	k++;	

}

}
if(i>m){
while(j<=high){

	arr[k]=a[j];
	k++;
	j++;
}
}
else
while(i<=m){
	arr[k]=a[i];
	k++;
	i++;
}
for(k=low;k<=high;k++)
	a[k]=arr[k];
}

void mergesort(int a[],int l,int h){

if(l<h){
int mid=(l+h)/2;
mergesort(a,l,mid);
mergesort(a,mid+1,h);
merge(a,l,mid,h);
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

mergesort(arr,0,n-1);
for(i=0;i<n;i++)
printf("%d",arr[i]);

}
