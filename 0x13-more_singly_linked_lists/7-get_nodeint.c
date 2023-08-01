#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @index:node being return
* @head: first node
 * Return: returns pointer to the node or a NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *ptr = head;
while (ptr && count < index)
{
ptr = ptr->next;
count++;
}
return (ptr ? ptr : NULL);
}
