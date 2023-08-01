/**
 * add_nodeint_end - insert a node at the end of the list
 * @head: pointer to the head
 * @n: data to insert in the node
 * Return: pointer to the new node
*/
#include <stdlib.h>
#include "lists.h"


listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;
listint_t *temp;
newNode = malloc(sizeof(listint_t));

newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
{
*head = newNode;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newNode;
}
return (temp);
}
