#include "main.h"

/**
 * _islower - checking for lowercase character.
 * @c: Charater to check
 * Return: 1 for lowercase char or 0 for anything else.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
