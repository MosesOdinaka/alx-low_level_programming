#include "main.h"

/**
 * _strncpy - copies a string, using at most n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
