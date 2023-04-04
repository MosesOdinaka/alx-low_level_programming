#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t
 * linked list.
 * @head: pointer to the first node.
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int hedn;
	listint_t *hd;
	listint_t *rmv;

	if (*head == NULL)
		return (0);

	rmv = *head;

	hedn = rmv->n;

	hd = rmv->next;

	free(rmv);

	*head = hd;

	return (hedn);
}
