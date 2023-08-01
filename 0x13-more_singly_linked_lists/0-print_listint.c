#include "lists.h"
/**
 * print_listint - function that prints data in a linked list
 * @h : head of the link
 * Return: Returns ptr
*/

size_t print_listint (const listint_t *h)
{

size_t count = 0;
while (h)
{
printf("%d \n", h->n);
count++;
h = h->next;
}
return (count);
}
