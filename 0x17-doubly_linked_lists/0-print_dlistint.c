#include "lists.h"
#include <stdio.h>

/*
 * print_dlistint - This will print all the elements of the
 * function list
 *
 * @h: Pointer to the first node
 * Return: returns the number of elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
