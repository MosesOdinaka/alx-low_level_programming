#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index at which to insert the new node
 * @n: data for the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	for (i = 0; temp != NULL && i < idx; i++)
		temp = temp->next;

	if (temp == NULL && i == idx)
		return (add_dnodeint_end(h, n));
	else if (temp != NULL)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->prev = temp->prev;
		new_node->next = temp;
		temp->prev->next = new_node;
		temp->prev = new_node;
		return (new_node);
	}
	return (NULL);
}
