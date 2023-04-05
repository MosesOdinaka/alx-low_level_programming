#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the first node of the list.
 *
 * Return: the address of the node where the loop
 * starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lop;
	listint_t *prev;

	lop = head;
	prev = head;
	while (head && p2 && lop->next)
	{
		head = head->next;
		lop = lop->next->next;

		if (head == lop)
		{
			head = prev;
			prev =  lop;
			while (1)
			{
				lop = prev;
				while (lop->next != head && lop->next != prev)
				{
					lop = lop->next;
				}
				if (lop->next == head)
					break;

				head = head->next;
			}
			return (lop->next);
		}
	}

	return (NULL);
}
