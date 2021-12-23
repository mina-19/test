#include<stdio.h>
#include<pthread.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<semaphore.h>
#include<unistd.h>

char sem[]="sem";
sem_t s;
static int max=0;

void *func1(void *arg){
sem_wait(&s);

printf("in func1.....%d\n",++max);
sleep(5);
printf("exit func1......\n");
sem_post(&s);
}

void main(){

pthread_t p1,p2;

//s=sem_open(sem,0,0644,1);
sem_init(&s,0,1);
pthread_create(&p1,NULL,func1,NULL);
pthread_create(&p2,NULL,func1,NULL);

pthread_join(p1,NULL);
pthread_join(p2,NULL);
sem_close(&s);
}



