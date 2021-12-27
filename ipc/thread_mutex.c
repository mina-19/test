#include<stdio.h>
#include<pthread.h>

#define n 20000000
long int sum=0;
pthread_mutex_t mutex =PTHREAD_MUTEX_INITIALIZER;
void *func1(void *arg){
int i;
pthread_mutex_lock(&mutex);
for(i=0;i<n;i++){
sum+=1;
}
pthread_mutex_unlock(&mutex);
}
void *func2(void *arg){
int i;
pthread_mutex_lock(&mutex);
for(i=0;i<n;i++){
sum-=1;
}
pthread_mutex_unlock(&mutex);
}
void main(){

pthread_t p1,p2;
pthread_create(&p1,NULL,func1,NULL);
pthread_create(&p2,NULL,func2,NULL);
pthread_join(p1,NULL);
pthread_join(p2,NULL);
printf("%ld\n",sum);
}

