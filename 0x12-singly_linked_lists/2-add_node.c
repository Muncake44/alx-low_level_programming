#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds new node at beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *cop;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	cop = strdup(str);
	if (cop == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = cop;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
