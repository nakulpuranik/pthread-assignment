/**
* Source code demo pthread
*/
#include "header.h"

void * threadProc1(void *input){
	int inputParam = (int)input;
	printf("Passed parameter %d\n", inputParam);
	pthread_exit(NULL);
}

int main(int argc, char *argv[]){
	pthread_t printThread1,printThread2;
	int param = 10;
	//create thread
	if(pthread_create(&printThread1,NULL,threadProc1,(void *)param)){
		printf("Error creating thread 1.");
	}

	//suspend calling thread execution till provided thread completes its execution.
	pthread_join(printThread1,NULL);

	pthread_exit(NULL);

	return 0;
}