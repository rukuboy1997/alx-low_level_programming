#include "lists.h"

/**
 * free_listint2 - frees a const listint_t list
 *    and sets the head to NULL
 * @head: pointer to head of the const listint_t list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	while (head && *head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
