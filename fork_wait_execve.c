#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i;
	pid_t child_pid;
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

	for (i = 0; i < 5; i++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
		}
		else if (child_pid == 0)
		{
			printf("child %d\n", i);
			execve(argv[0],argv, NULL);
		}
		else
			wait(NULL);
	}
	return (0);
}
