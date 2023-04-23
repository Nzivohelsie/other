#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main(void)
{
	char *buffer;
	size_t length;

	printf("$");
	buffer = malloc(length * sizeof(char));
	getline(&buffer, &length, stdin);
	printf("%s\n", buffer);
	free(buffer);
	return (0);
}
