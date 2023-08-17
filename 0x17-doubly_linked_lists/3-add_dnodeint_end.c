#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - Adds new node at the end of the dlinked list
 * @head: double pointer to the pointer to the head node
 * @n: Value to add to the new element
 * Return: Returns the address of the new node
 * returns NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_element, *tmp;

	new_element = malloc(sizeof(dlistint_t));
	if (!new_element)
	{
		return (NULL);
	}

	new_element->n = n;
	new_element->next = NULL;

	if (!*head)
	{
		*head = new_element;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}

		tmp->next = new_element;
		new_element->prev = tmp;
	}

	return (new_element);
}
