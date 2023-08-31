#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - Converts binary number to an unsigned int
 * @b: Pointer to string of 0 and 1 chars
 *
 * Return: converted number, if b is NULL or contains char 0 or 1 - 0
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int result, i;

	if (b == NULL)
	{
		return (0);
	}
	result = 0;
	i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	result = result * 2 + (b[i] - '0');
	i++;
	}
	return (result);
}
