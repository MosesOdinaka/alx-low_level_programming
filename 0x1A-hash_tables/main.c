#include "hash_tables.h"

/**
 * main - creates a new hash table with an array size of 1024
 * and prints its address
 * Return: EXIT_SUCCESS
 */

int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("%p\n", (void *)ht);

	s = "cisfun";
	hash = hash_djb2((unsigned char *)s);
	printf("%lu\n", hash);

	printf("%lu\n", key_index((unsigned char *)s, ht->size));

	return (EXIT_SUCCESS);
}
