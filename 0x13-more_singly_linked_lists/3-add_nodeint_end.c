#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of the listint_t list
 * @n: int to be added in the new node
 * Return: A pointer to the new node if it was added or NULL if it wasn't
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *new_node = NULL, *last_node = NULL;

new_node = malloc(sizeof(listint_t));

if (new_node)
{
	new_node->n = n;
	new_node->next = NULL;

	if (*head)
	{
		last_node = *head;
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	else
		*head = new_node;
}
return (new_node);
}
