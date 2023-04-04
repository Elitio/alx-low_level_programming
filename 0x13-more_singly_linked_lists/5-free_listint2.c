#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Function that frees a list
 * @head: This is a pointer to a pointer to the head to be freed
 * Return: Will return no value
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node = *head;
	listint_t *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	*head = NULL;
}
