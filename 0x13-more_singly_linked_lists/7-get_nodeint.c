#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of the list
 * @head: pointer to head of the list
 * @index: which node to stop at
 * Return: if node does not exist- NULL or pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	return (current);
}
