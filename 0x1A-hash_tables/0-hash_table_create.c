#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hit;
	unsigned long int i;

	hit = malloc(sizeof(hash_table_t));
	if (hit == NULL)
		return (NULL);

	hit->size = size;
	hit->array = malloc(sizeof(hash_node_t *) * size);
	if (hit->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hit->array[i] = NULL;

	return (hit);
}
