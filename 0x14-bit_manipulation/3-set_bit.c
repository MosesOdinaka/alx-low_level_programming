
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a
 * given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n = (*n | (1 << index));
		return (1);
	}
	return (-1);
}
