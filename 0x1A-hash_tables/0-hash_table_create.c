#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size:size of the array
 * Return:Returns a ptr to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **array;
	unsigned long int x;
    hash_table_t *t;

	t = malloc(sizeof(hash_table_t));
	if (t == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = NULL;

	t->array = array;
	t->size = size;

	return (t);
}
