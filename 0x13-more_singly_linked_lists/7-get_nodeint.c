
/**
 * get_nodeint_at_index -function that returns the nth node of a the list
 * @index: index of the node
 * @head: first node of the list
 * Return: returns the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int pos = 0;
while (head != NULL && pos < index)
{
head = head->next;
pos++;
}
if (head == NULL)
{
return (NULL);
}
return (head);
}
