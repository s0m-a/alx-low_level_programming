#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_node -  function that adds a new node at the beginning of the list
* @head: this is a double pointer
* @str: new string to add to the node
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;
while (str[len])
len++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;
return (*head);
}
