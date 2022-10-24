#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t list
 * @head: pointer to head of the listint_t list
 * Return: the head node’s data (n) or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int data = 0;

	if (*head == NULL)
	{
		return (data);
	}
	else
	{
		tmp = *head;
		data = (*head)->n;
		*head = (*head)->next;
		free(tmp);
		return (data);
	}
}
