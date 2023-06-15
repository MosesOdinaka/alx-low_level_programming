#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements
 * of dlistint_t list.
 * @h: head of the list pointer.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (counter);
}
