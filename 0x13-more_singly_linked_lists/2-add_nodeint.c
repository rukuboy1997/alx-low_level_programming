#include "lists.h"

/**
 * add_nodeint - Function to add a new node at the beginning of listint_t list
 * @head: Pointer to head of the listint_t list
 * @n: Pointer to int for the new node
 * Return: address of new element or null if not successful
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
