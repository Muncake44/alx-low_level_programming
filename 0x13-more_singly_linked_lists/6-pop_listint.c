#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to the head of list
 *
 * Return: 0 if list empty or head node's data (n)
 *
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);

	temp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (ret);
}
