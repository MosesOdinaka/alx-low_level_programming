#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatanate 2 strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer to string.
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, o = 0, p = 0;

	if (s1 != NULL)
		for (; s1[i]; i++)
		;
	if (s2 != NULL)
		for (; s2[o]; o++)
		;

	s = malloc(sizeof(char) * (i + o + 1));
	if (s == NULL)
		return (NULL);


	while (p < i)
	{
		s[p] = s1[p];
		p++;
	}

	while (p < i + o)
	{
		s[p] = s2[p - i];
		p++;
	}
	s[p] = '\0';
	return (s);
}
