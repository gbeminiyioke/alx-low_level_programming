#include "hash_tables.h"

/**
 * key_index - This function give you the
 * index of a key
 * @key: This the key
 * @size: The size of the array of the hash table
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
