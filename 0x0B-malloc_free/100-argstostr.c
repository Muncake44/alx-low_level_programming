#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * argstostr - convert the params passed to the program to string
  * @ac: the argument count
  * @av: the argument vector
  *
  * Return: ...
  */

char *argstostr(int ac, char **av)
{
	int len;
	int i;
	char *result;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	len += strlen(av[i]) + 1;
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);

	ptr = result;
	for (i = 0; i < ac; i++)
	{
		strcpy(ptr, av[i]);
		ptr += strlen(av[i]);
		*ptr = '\n';
		ptr++;
	}
	*ptr = '\0';
	return (result);
}
