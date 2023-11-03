#include "hash_tables.h"

/**
 *hash_table_get - bring value associated with key
 *@ht: hash table to bring
 *@key: key of table
 *Return: value /key or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int i;
	hash_node_t *tmp;

	if (!key || !strlen(key) || !ht || !ht->array || !ht->size)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[i];
	if (tmp == NULL)
		return (NULL);

	for (; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}

	return (NULL);
}
