#include "lists.h"
/**
 * free_listint2 - function that can free linked lists
 * @head:a pointer
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
return;
while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
