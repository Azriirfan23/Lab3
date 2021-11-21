#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>

int getPIN(){
	//use to get not Prime Number from user//
	printf("This PIN cannot use\n\n.");
	}

int main (void){

	int fd[2];
	pipe(fd);
	pid_t pid = fork ();
	return EXIT_SUCESS;
}
