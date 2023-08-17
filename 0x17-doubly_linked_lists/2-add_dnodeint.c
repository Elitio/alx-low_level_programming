#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>

/**
 * add_dnodeint - This will add a new node at the
 * beginning of the dlinked lists
 *
 * @head: dlined list pointer to the beginning of the dlink
 * @n: valu to add to the node
 * Return: Will return the address to the added node
 * or returns NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;

	new_element = malloc(sizeof(dlistint_t));
	if (!new_element)
	{
		return (NULL);
	}

	new_element->n = n;
	new_element->prev = NULL;
	new_element->next = NULL;

	if (!*head)
	{
		*head = new_element;
	}
	else
	{
		new_element->next = *head;
		(*head)->prev = new_element;
		*head = new_element;
	}

	return (new_element);
}
