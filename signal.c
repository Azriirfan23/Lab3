#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <signal.h>
#include <unistd.h>


void sigint_handler(int sig)
        {if (sig == SIGINT)
		printf("This special Handle for SIGNIT\n\n");
	else{
		if(sig == SIGTSTP)
			printf("This special Handle for SIGTSTP\n\n");
		else{	if (sig == SIGQUIT)
			printf("This special Handle for SIGQUIT\n\n");
			}
	}
}

int main(void)
{
  if (signal(SIGINT, sigint_handler) == SIG_ERR){
     perror("signal");
     exit(1);
  }
  if (signal(SIGTSTP, sigint_handler) == SIG_ERR){
     perror("signal");
     exit(1);
  }
  if (signal(SIGQUIT, sigint_handler) == SIG_ERR){
     perror("signal");
     exit(1);
  }
	while (1)
	{
		sleep(1);
	}
  return (0);
}


