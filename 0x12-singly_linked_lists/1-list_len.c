#include <stdio.h>
#include "list.h"

/**
 * list_len - returns length of the list
 * @h:pointer
 * Returns : number of element to be printed
 */
size_t list_len(const list_t *h)
{
int count = 0;
while (h->next !=  NULL)

{
count++;
h = h->next;
}
return (count);
}
