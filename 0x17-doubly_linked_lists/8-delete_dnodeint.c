#include "lists.h"

/**
 * delete_dnodeint_at_index -  function that deletes the node at
 * index index of a dlistint_t linked list.
 * @head: double ptr
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	curr = *head;

	for (i = 0; curr != NULL && i < index; i++)
		curr = curr->next;
	if (curr == NULL)
		return (-1);
	if (*head == curr)
		*head = curr->next;
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	if (curr->prev != NULL)
		curr->prev->next = curr->next;
	free(curr);
	return (1);
}
