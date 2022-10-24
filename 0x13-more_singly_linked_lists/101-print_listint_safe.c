#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a listint_t list.
 * @head: pointer to first node of a listint_t list.
 *
 * Return: a size_t number representing the amount of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next >= head)
		{
			printf("-> [%p] %d\n", (void *)head->next, (head->next)->n);
			break;
		}
		head = head->next;
	}

	return (count);
}
