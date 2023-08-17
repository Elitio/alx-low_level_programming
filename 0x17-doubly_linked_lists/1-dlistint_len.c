#include "lists.h"

/**
 * dlistint_len - Returns the length of th dlist
 *
 * @h: Pointer to the head of dlists
 * Return: Returns the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}
