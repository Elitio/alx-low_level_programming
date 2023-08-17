#include "lists.h"

/**
 * sum_dlistint - Will compute the sum of data in a dlinked list
 * @head: pointer to head node of list
 *
 * Return: Returns the sum of all data
 * Otherwise  will return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
