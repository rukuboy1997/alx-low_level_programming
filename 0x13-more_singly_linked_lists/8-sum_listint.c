#include "lists.h"

/**
 * sum_listint - Sum of all the data (n) of a listint_t linked list
 * @head: Pointer to head of the list
 *
 * Return: The the sum of all the data (n) of the list.
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	unsigned int ans = 0;

	if (tmp)
	{
		while (tmp)
		{
			ans += tmp->n;
			tmp = tmp->next;
		}
		return (ans);
	}
	return (0);
}
