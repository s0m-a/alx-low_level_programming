#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: Returns nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	char flags = 0;
hash_node_t *temp;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		temp = ht->array[x];
		while (temp != NULL)
		{
			if (flags == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flags = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
