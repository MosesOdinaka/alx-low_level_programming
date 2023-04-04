#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: linked list to traverse.
 *
 * Return: Number of nodes.
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}
	return (numb);
}
