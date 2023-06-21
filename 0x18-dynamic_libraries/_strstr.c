#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: the string to search
 * @needle: the substring to search for
 *
 * Return: pointer to the beginning of the located
 * substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*haystack == '\0' || *needle == '\0')
		return (0);
	for (; *haystack; haystack++)
	{
		for (h = haystack, n = needle; *h
				&& *n && (*h == *n); h++, n++)
			;
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
