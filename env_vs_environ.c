#include <unistd.h>
#include <stdio.h>
int main(int ac, char **av, char **env)
{
	extern char **environ;
	(void)ac;
	(void)av;

	printf("%p, %p\n", &env, &environ);
	return (0);
}
