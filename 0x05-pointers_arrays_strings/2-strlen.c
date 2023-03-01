#include"main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string.
 * Return: length.
 */
int_strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		*s++;
	}

	return (len);
}
