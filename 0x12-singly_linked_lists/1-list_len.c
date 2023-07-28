#include <tdlib.h>
#include "lists.h"

/**
 * list_len - returns length of the list
 * @h:pointer
 * Returns : number of element to be printed
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h)

{
count++;
h = h->next;
}
return (count);
}
