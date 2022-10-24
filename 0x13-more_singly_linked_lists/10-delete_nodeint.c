#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t list.
 * @head: head of linked list
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *index_node, *tmp_node = *head;
	unsigned int i = 0;

	if (tmp_node && (index == 0))
	{
		*head = tmp_node->next;
		free(tmp_node);
		return (1);
	}
	while (tmp_node)
	{
		if (i + 1 == index)
		{
			index_node = tmp_node->next;
			if (index_node)
			{
				tmp_node->next = index_node->next;
				free(index_node);
				return (1);
			}
		}
		tmp_node = tmp_node->next;
		i++;
	}
	return (-1);
}
