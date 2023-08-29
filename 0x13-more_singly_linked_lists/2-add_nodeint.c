#include "lists.h"

/**
 * add_nodeint - adds a new node at beggining of list
 * @head: pointer to first node in the list
 * @n: content to insert in new node
 *
 * Return: adress of new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
