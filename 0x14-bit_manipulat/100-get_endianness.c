#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int vl;
	char *l;

	vl = 1;
	l = (char *) &vl;

	return ((int)*l);
}
