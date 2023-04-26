#include "main.h"
int _execute(char *path, char **arguments, char **env)
{
		_execve(path, arguments, env);
		free(path);
		_free(arguments);
	return (1);
}
