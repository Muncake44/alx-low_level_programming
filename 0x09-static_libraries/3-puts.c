#include "main.h"

/**
 * _puts - Print a string followed by a newline
 * @s: The input string
 */
void _puts(char *s)
{
	while (*s)
	{
	_putchar(*s);
	s++;
	}
	_putchar('\n');
}
