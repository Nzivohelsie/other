#include "main.h"
/**
 * _execve - function executes command
 * @av: argument
 */
int _execve(char *command, char **av, char **environ)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("error");
		return (1);
	}
	else if (child_pid == 0)
	{
		if (execve(command, av, environ) == -1)
		{
			perror("Error");
		}
	}
	else
	{
		wait(&status);
	}
	return (1);
}
