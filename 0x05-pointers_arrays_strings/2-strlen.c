#include"main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string.
 * Return: length.
 */
size_t int_strlen(char *s)
{
	size_t len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
