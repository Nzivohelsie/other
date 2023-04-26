#include "main.h"
int _free(char **arguments)
{
	int i;

	for (i = 0; arguments[i] != NULL; i++)
	{
		free(arguments[i]);
	}
	free(arguments);
	return (1);
}
