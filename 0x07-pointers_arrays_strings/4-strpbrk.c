#include "main.h"

/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: string
 *@accept: chars to compare
 *Return 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int z;
	
	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
			if (*s == accept[z])
				return (s);
		}
		s++;
	}
	return ('\0');
}
