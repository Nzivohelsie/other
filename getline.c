#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
	char *buffer;
	size_t length;

	buffer = malloc(length * sizeof(char));
	printf("$");
	getline(&buffer, &length, stdin);
	printf("%s\n", buffer);
	return (0);
}
