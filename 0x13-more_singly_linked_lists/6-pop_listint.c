#include "lists.h"
/**
 * pop_listint -function that deletes the head node of a linked list
 * @head: pointer to node
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
int num;
listint_t *ptr;
if (!head || !*head)
return (0);
num = (*head)->n;
ptr = (*head)->next;
free(*head);
*head = ptr;
return (num);
}
