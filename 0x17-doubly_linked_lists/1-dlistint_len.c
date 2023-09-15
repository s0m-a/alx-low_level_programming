#include "lists.h"

/**
 * dlistint_len - function that returns the
 * number of elements in a linked dlistint_t list
 * @h: ptr to the list header
 * Return:Returns number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *temp;

	count = 0;
	if (h == NULL)
		return (0);
	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
