#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string
 * Return: Alwyas 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
