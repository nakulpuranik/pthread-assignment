# In this makefile we are accepting the input from user as a command line
# which gets stored in macro ARGS

all:
	gcc pthreadFile.c -o FinalExe -lpthread
run:
	./FinalExe ${ARGS}
usage:
	@echo 'use as : make ARGS="CommandLine_Argument" run'
clean:
	rm FinalExe
