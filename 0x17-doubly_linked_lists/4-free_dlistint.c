#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Will free a dlinked list
 * @head: pointer to head of the dlinked lis
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *old_element, *new_element;

	/* To keep track of node(s) when traversing */
	old_element = head;
	new_element = head;

	while (new_element)
	{
		new_element = new_element->next;
		free(old_element);
		old_element = new_element;
	}
}
