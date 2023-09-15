#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: ptr to head
 * Return:Returns success.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
