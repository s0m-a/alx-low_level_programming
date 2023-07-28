#include <stdlib.h>
#include "lists.h"
/**
* free_list -  function that frees a list_t list.
* @head: ptr to the first node
* no return
*/
void free_list(list_t *head)
{
list_t *ptr;
while (head)
{
ptr  = head->next;
free(head->str);
free(head);
head = ptr;
}
}
