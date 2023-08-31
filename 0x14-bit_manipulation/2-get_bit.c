#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the bit
 * @index: index starting from 0 of the bit required
 *
 * Return: value of the bit at the index, or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)

{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
