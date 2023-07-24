#include "main.h"

/**
 *swap_int - swaps the vales of two integers.
 *@a: integer to be swapped
 *@b: interger to swap the previous
 */

void swap_int(int *a, int *b)
{
	int k = *a;
	*a = *b;
	*b = k;
}
