/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 * Return: pointer to the new node, or NULL if it fails
*/
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


listint_t *add_nodeint(listint_t **head, const int n)
{
if (head == NULL)
printf("this list is empty");
listint_t *temp, *newNode;
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
printf("the memory was not allocated");
newNode->n = n;
newNode->next = *head;
*head = newNode;
}
