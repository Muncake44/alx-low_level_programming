#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches an integer
 * @array: pointer array
 * @size: number elements in array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: first element index,on succes or return -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i <  size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);

}
