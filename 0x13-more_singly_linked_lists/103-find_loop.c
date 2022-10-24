#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to first node in the list.
 *
 * Return: address of the node where the loop starts. NULL if no loop is found.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = NULL;
	listint_t *hare = NULL;

	if (head == NULL)
		return (NULL);

	tortoise = head;
	hare = head;

	while (1)
	{
		tortoise = tortoise->next;
		hare = (hare->next);
		if (hare == NULL)
			return (NULL);

		hare = (hare->next);
		if (hare == NULL)
			return (NULL);

		if (tortoise == hare)
			break;
	}

	tortoise = head;
	while (1)
	{
		if (tortoise == hare)
			break;
		tortoise = tortoise->next;
		hare = (hare->next);
	}

	return (tortoise);
}
