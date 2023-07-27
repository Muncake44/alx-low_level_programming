#include "main.h"
/**
 *reverse_array - function that  reverses the content of an array of integers.
 *@a: integer array
 *@n: element of array
 *Return: void
 *
 */
void reverse_array(int *a, int n)
{
	int k;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = k;
		n--;
	}

}
