#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data in a list
 * @head: first node
 * Return: returns the sum of all the data
 */
int sum_listint(listint_t *head)
{
int add = 0;
listint_t *ptr = head;
while (ptr)
{
add += ptr->n;
ptr = ptr->next;
}
return (add);
}
