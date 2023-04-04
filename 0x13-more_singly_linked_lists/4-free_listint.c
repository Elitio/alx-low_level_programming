#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - the function that will free the list
 *
 * @head: This is a pointer to the head of the list to be freed
 * Return: Will return no valued
 */

void free_listint(listint_t *head)
{
	listint_t *current_node = head;
	listint_t *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
