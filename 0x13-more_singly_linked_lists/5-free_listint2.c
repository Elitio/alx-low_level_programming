#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Function that frees a list
 * @head: This is a pointer to a pointer to the head to be freed
 * Return: Will return no value
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL)
	{
	return;
	}

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
