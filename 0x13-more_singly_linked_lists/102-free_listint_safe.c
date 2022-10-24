#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list, even if is in a loop.
 * @h: pointer to starting node in the list.
 *
 * Return: size of the list that was free'd.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *node = NULL;
	size_t count = 0;

	if (h == NULL)
		return (0);

	if (*h == NULL)
		return (0);

	node = *h;

	while (node != NULL)
	{
		count++;
		node = (*h)->next;
		free(*h);
		if (node >= *h)
		{
			*h = NULL;
			return (count);
		}
		*h = node;
	}

	return (count);
}
