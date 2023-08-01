#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints data in a linked list
 * @h : head of the link
 * Return: Returns ptr
*/

size_t print_listint (const listint_t *h)
{
if (h == NULL)
printf("this list is empty");

size_t count = 0;
while (h != NULL)
{
printf("%d \n", h->n);
h = h->next;
count++;
}
return (count);
}
