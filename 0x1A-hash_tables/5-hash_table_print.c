#include "hash_tables.h"

/**
 * hash_table_print - This function prints
 * a hash table
 * @ht: This is the hash table
 * Description: Key/value pairs are printed
 * in the order they appear in the array
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	unsigned char c_flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (c_flag == 1)
				printf(", ");
			node = ht->array[i];
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
