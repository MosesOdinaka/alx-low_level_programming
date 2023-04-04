#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: pointer to the first node
 * @n: the new insert element
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tem;

	(void)tem;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	tem = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tem->next != NULL)
		{
			tem = tem->next;
		}
		tem->next = new;
	}

	return (*head);
}
