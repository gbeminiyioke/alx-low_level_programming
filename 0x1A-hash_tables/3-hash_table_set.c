#include "hash_tables.h"

/**
 * hash_table_set - This function adds an
 * element to the hash table.
 * @ht: This is the hash table to add or
 * update.
 * @key: The key to add
 * @value: The value associated with key
 * Return: 0 Upon failure otherwise - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *value_copy;
	unsigned long int i, idx;
	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
