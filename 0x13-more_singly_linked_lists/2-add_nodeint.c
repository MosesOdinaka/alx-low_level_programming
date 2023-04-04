#include "lists.h"
/**
 *add_nodeint - Adds a new node at the beginning of a listint_t list.
 *@head: Pointer to the first node.
 *@n: data to insert in the new node.
 *
 *Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	niew->next = (*head);
	(*head) = new;

	return (new);
}