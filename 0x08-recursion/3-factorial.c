#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number to return factor from
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
