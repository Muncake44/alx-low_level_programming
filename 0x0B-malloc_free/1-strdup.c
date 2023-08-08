#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
	return (NULL);

	dup = malloc(strlen(str) + 1);
	if (dup == NULL)
	return (NULL);
	strcpy(dup, str);
	return (dup);
}
