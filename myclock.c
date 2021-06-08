#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	pid_t childpid;
	char  choice;
	int   time;

	while (true) {

		if (argc == 1) time = 20;
		else if (argc == 2) {
			sscanf(argv[1], "%d", &time);
		}
		else {
			printf("the format is not matching\n"
					"like clock 10 or clock\n");
			exit(0);
		}

		sleep(60 * time);
		system("play ./seafloor.mp3 trim 10.0 6.0;date");
		
		printf("It's time to have a break!\n"
				"r: restart\n"
				"e: end\n"
				"Please input your choice(one char): ");
		
		while (scanf("%c", &choice) && choice == '\n');

		if (choice == 'e') {
			break;
		}
		else if (choice == 'r') {
			printf("input the time: ");
			scanf("%d", &time);
		}
		else {
			printf("Wrong! Please restart!\n");
			break;
		}
	}




	exit(0);
}
