#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Find the length of a doubly linked list
 * @h: A pointer to the first node
 *
 * Return: Return the length of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}

	return (len);
}
