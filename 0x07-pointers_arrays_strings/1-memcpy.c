#include "main.h"

/**
 * _memcpy - copies memory area
 * @src - original memeory area
 * @dest- new memory area
 * @n- number of bytes
 *
 * Return: copied memory with changed n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

