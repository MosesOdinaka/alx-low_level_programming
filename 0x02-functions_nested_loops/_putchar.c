#include <unistd.h>

/**
 * _putchar -It writes the character c to standard out.
 * @C: Character to print.
 * Return: 1 on success.
 * On error, -1 is returned, error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
