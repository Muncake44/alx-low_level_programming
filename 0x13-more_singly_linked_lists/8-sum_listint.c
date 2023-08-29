#include "lists.h"

/**
 * sum_listint - returns sum of all data of linked list
 * @head: pointer to head of linkede list
 *
 * Return: if list is empty - 0 or sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
