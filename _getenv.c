#include <stdio.h>
#include <unistd.h>
void main(void);
char *_getenv(const char *name)
{
	extern char **environ;
	int i, j, stat;

	for (i = 0; environ[i]!= NULL; i++)
	{
		stat = 1;
		for (j = 0; environ[i][j] != '='; j++)
		{
			if (environ[i][j] != name[j])
			{
				stat = 0;
				break;
			}
		}
		if (stat)
			return (&environ[i][j +1]);
	}
	return (NULL);
}
