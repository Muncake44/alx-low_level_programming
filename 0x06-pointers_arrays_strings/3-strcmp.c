#include "main.h"
/**
 *_strcmp - function that compares two strings
 *@s1: The first string
 *@s2: The second string
 *
 *Return:(s1[i] - s2[i])
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}

	return (s1[i] - s2[i]);
}
