#include "hash_tables.h"

/**
 * hash_djb2 - This function implements
 * the djb2 algorithm.
 * @str: The string to hash.
 * Return: The calculated hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	int i;
	unsigned long int hash;

	hash = 5381;
	while ((i = *str++))
		hash = ((hash << 5) + hash) + i;
	return (hash);
}
