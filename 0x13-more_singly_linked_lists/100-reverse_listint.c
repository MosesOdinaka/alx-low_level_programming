#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: head of the listint_t linked list.
 *
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *q;
	listint_t *r;

	q = NULL;
	r = NULL;

	while (*head != NULL)
	{
		r = (*head)->next;
		(*head)->next = q;
		q = *head;
		*head = r;
	}

	*head = q;
	return (*head);
}
