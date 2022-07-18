#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: head of a list.
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nn = 0; /* nn = number of nodes */

	while (h != NULL)
	{
		h = h->next;
		nn++;
	}

	return (nn);
}
