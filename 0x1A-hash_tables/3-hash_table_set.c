#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	char *s;
	unsigned long int hash;

	ht = hash_table_create(1024);
	printf("%p\n", (void *)ht);

	s = "cisfun";
	hash = hash_djb2((unsigned char *)s);
	printf("%lu\n", hash);

	printf("%lu\n", key_index((unsigned char *)s, ht->size));

	hash_table_set(ht, "betty", "cool");

	return (EXIT_SUCCESS);
}
