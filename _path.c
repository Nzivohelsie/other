#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char *string;
	char *token;
	char *str;

	string = getenv("PATH");
	str = malloc(1024);
	strcpy(str, string);
	token = strtok(string, ":");
	while (token != NULL)
	{
		printf("%s\n", token);
		token =strtok(NULL, ":");
	}
	free(str);
	return (0);
}
