/**
* Source code demo pthread
*/
#include "header.h"

void * threadProc1(void *input){
	int index;
	for(index = 1; index <=500; index++){
		printf("Thread 1 : \t%d\n",index);
	}
	pthread_exit(NULL);
}

void * threadProc2(void *input){
	int index;
	for(index = 500; index >=1; index--){
		printf("Thread 2 : \t%d\n",index);
	}
	pthread_exit(NULL);
}

int main(int argc, char *argv[]){
	pthread_t printThread1,printThread2;
	
	//create thread
	if(pthread_create(&printThread1,NULL,threadProc1,NULL)){
		printf("Error creating thread 1.");
	}

	if(pthread_create(&printThread2,NULL,threadProc2,NULL)){
		printf("Error creating thread 2.");
	}

	//suspend calling thread execution till provided thread completes its execution.
	pthread_join(printThread1,NULL);
	pthread_join(printThread2,NULL);

	pthread_exit(NULL);

	return 0;
}