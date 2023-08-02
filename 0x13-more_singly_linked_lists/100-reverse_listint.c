#include "lists.h"

/**
 *reverse_listint - reverses a linked list
 *@head: pointer to the first node in the list
 *Retub: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	while (*head)
	{
		listint_t *next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;

		if (*head == NULL)
		{
			prev->next = NULL;
		}
	}
	return prev;
}
