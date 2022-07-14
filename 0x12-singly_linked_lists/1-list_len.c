#include <stdlib.h>
#include "lists.h"


/**
 * list_len - Calculates the length of a linked list
 * @h: Pointer to the head of the linked list
 * Return: The total amount of nodes in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
