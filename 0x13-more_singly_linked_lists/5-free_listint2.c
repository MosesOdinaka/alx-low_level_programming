#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the first node
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *rmv;

	if (head != NULL)
	{
		rmv = *head;
		while ((tmp = rmv) != NULL)
		{
			rmv = rmv->next;
			free(tmp);
		}
		*head = NULL;
	}
}
