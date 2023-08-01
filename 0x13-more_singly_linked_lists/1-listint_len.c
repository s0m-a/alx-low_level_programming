/**
* listint_len -gets number of elements in a linked lists
* @h: head linked list
* Return: number of nodes in the list
*/
#include <stdio.h>
#include "lists.h"

size_t listint_len(const listint_t *h)
{
size_t count = 0;
if (h == NULL)
printf("this is an empty list");
while (h)
{
count++;
h = h->next;
}
return (count);
}
