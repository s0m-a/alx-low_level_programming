#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht:hash table
 * Return:Returns nothing
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned char c_flag = 0;
	hash_node_t *node;
	unsigned long int x;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (c_flag == 1)
				printf(", ");

			node = ht->array[x];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			c_flag = 1;
		}
	}
	printf("}\n");
}
