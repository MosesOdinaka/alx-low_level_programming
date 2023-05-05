#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return:  the converted number, or 0. with conditions.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int un;
	int lent, base_two;

	if (!b)
	return (0);

	un = 0;

	for (lent = 0; b[lent] != '\0'; lent++)
	;

	for (lent--, base_two = 1; lent >= 0; lent--, base_two *= 2)
	{
		if (b[lent] != '0' && b[lent] != '1')
		{
			return (0);
		}

		if (b[lent] & 1)
		{
			un += base_two;
		}
	}

	return (un);
}
