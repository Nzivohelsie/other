#include <string.h>
int main(char *str)
{
	char *delimiter = " ";
	char *dest  = str;
	char *token;

	token = strtok(str, delimiter);
	while (token != NULL)
	{
		token = strtok(NULL, delimiter);
	}
	return (0);
}
