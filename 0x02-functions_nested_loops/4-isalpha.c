#include "main.h"

/**
 * _
 * is_alpha - For alphsbet char.
 * @c: Character to check.
 * Return: 1 for alphabet char or 0 for anything else.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <=90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
