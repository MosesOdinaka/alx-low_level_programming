#include "hash_tables.h"

/**
 * main - check the code.
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

	/* Test for collisions */
	hash_table_set(ht, "hetairas", "value1");
	hash_table_set(ht, "mentioner", "value2");
	hash_table_set(ht, "heliotropes", "value3");
	hash_table_set(ht, "neurospora", "value4");
	/* ... */

	return (EXIT_SUCCESS);
}
