#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * linked list.
 * @head: head of a linked list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sumup;

	sumup = 0;
	while (head != NULL)
	{
		sumup += head->n;
		head = head->next;
	}

	return (sumup);
}
