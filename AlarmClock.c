#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int
main(int argc, char **argv)
{
	pid_t childpid;
	sleep(60 * 31);
	/* the subprocess plays the music  */
	if ( (childpid = fork()) == 0) {
		system("sh ./AlarmClock.sh");
		exit(0);
	}
	

	exit(0);
}
