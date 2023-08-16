#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function executes a function on array
 * @array:an array
 * @size: number elements in array
 * @action: pointer to function
 * Return: void
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
		action(array[j]);

}
