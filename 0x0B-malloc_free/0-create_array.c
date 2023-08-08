#include "main.h"
#include <stdlib.h>
/**
 * creat_array - creates an array of char and ass
 * @size: size of array
 * @c: char to assign
 *
 *Return: back to array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	array[i] = c;
	return (array);
}
