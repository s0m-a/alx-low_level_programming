/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the first node
 * Return: returns the head node’s data (n).
 */
#include "lists.h"
int pop_listint(listint_t **head)
{
if (*head == NULL)
return (-1);
int n = (*head)->n;
listint_t *new = *head;
*head = (*head)->next;
free(new);
return (n);
}
