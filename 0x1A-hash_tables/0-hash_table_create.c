#include "hash_tables.h"
/**
 *hash_table_create- creator of a hash table
 *@size : table's size
 *Return: table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p;

	p = malloc(sizeof(hash_table_t));

	if (p == NULL)
		return (NULL);

	p->size = size;
	p->array = malloc(sizeof(hash_node_t *) * size);

	if (p->array == NULL)
	{
		free(p->array);
		return (NULL);
	}
	return (p);
}
