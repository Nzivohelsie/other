#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - parse a string
 * Return: 0 on success
 */
int main(void)
{
	char *token;
	char *buffer;
	size_t length;

	printf("$");
	getline(&buffer, &length, stdin);
	token = strtok(buffer, " ");
	while (token != NULL)
	{
		printf("%s, ", token);
		token = strtok(NULL, " \n");
	}
	printf("\n");
	free(buffer);
	return (0);
}
