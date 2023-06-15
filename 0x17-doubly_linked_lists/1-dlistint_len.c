#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * in a linked dlistint_t list.
 * @h: header pointer to the list.
 * Return: number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
