#include "main.h"

/**
 * _puts - writes a string to stdout
 * @s: the string to write
 *
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
