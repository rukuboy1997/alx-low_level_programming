#include "lists.h"

/**
 * get_nodeint_at_index - Finds the nth node of a listint_t linked list.
 * @head: Pointer to head of the list
 * @index: Integer index of desired node
 *
 * Return: The nth node or NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i = 0;

	while (tmp != NULL)
	{
		if (i == index)
			return (tmp);
		i++;
		tmp = tmp->next;
	}
	return (0);
}
