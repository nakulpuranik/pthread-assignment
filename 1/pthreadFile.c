/**
* Source code demo pthread
*/
#include "header.h"

void * threadProc(void *input){
	printf("Inside thread proc\n");
	pthread_exit(NULL);
}

int main(int argc, char *argv[]){
	pthread_t printThread;
	
	//create thread
	if(pthread_create(&printThread,NULL,threadProc,NULL)){
		printf("Error creating thread.");
	}

	//suspend calling thread execution till provided thread completes its execution.
	pthread_join(printThread,NULL);

	pthread_exit(NULL);

	return 0;
}