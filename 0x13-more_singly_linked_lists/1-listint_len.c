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
while (h)
{
count++;
h = h->next;
}
return (count);
}
