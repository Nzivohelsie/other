#include <unistd.h>
#include <stdio.h>
#include<sys/wait.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include<stdlib.h>
int main(void)
{
	pid_t child_pid;
	ssize_t chars_read;
	/**extern char **environ;*/
	size_t length;
	int i;
	char *buffer, *token, *buffer_2;
	char **argv;
	int strings = 0;

	while (1)
	{
		printf("#cisfun$ ");
		buffer = malloc(length * sizeof(char*));
		chars_read = getline(&buffer, &length, stdin);
		if (chars_read == -1)
		{
			printf("\n");
			return (-1);
		}
		buffer_2 = malloc(chars_read * sizeof(char));
		strcpy(buffer_2, buffer);
	        token = strtok(buffer, " \n");
	        while (token != NULL)
	        {
			strings++;
	                token = strtok(NULL, " ");
		}
		strings++;
		argv = malloc(strings * sizeof(char*));
		token = strtok(buffer_2, " \n");
		for (i = 0; token != NULL; i++)
		{
			argv[i] = malloc(strlen(token) * sizeof(char));
			strcpy(argv[i], token);
			token = strtok(NULL, " ");
		}
		argv[i] = NULL;
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
		}
		else if (child_pid == 0)
		{
			if (execve(argv[0],argv, NULL) == -1)
			{
				perror("Error");
			}
		}
		else
			wait(NULL);
	}
	free(argv);
	free(buffer);
	free(buffer_2);
	return (0);
}
