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
	return (EXIT_SUCCESS);
}
