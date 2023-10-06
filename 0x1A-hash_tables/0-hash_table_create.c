#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: hash table size
 * Return: Returns a pointer to the newly created hash table
 * If something went wrong, your function should return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
unsigned long int x;
	hash_node_t **arr;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)

		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		arr[x] = NULL;

	table->arr = arr;
	table->size = size;

	return (table);
}
