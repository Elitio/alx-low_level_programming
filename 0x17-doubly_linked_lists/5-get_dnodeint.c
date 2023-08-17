#include "lists.h"

/**
 * get_dnodeint_at_index - Will retrieves the nth node of a list.
 * @head: pointer to head node of the  dlinked list.
 * @index: position of node in the dlinked list
 *
 * Return: Returns the address of nth node if found else retunn NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}

	return (head);
}
