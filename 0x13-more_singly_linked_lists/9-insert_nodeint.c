#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to head of the list
 * @idx: Index of the list where the new node should be added.
 * @n: New node data.
 *
 * Return: Address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp_node = *head;
	unsigned int i = 0;

	while (tmp_node && i < idx - 1)
	{
		tmp_node = tmp_node->next;
		i++;
	}
	if (tmp_node || (i == idx - 1 || idx == 0))
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node)
		{
			new_node->n = n;
			if (idx == 0)
			{
				new_node->next = *head;
				*head = new_node;
			}
			else
			{
				new_node->next = tmp_node->next;
				tmp_node->next = new_node;
			}
			return (new_node);
		}
	}
	return (NULL);
}
