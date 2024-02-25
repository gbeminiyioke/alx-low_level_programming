#include "hash_tables.h"

/**
 * hash_table_get - This function retrieves
 * the value associated with a key
 * @ht: A pointer to the hash table.
 * @key: The key.
 * Return: Null if the key is not found
 * Otherwise the value associated with key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);
	node = ht->array[idx];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	return ((node == NULL) ? NULL : node->value);
}
