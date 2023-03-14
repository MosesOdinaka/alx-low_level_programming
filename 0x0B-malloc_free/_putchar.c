#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes the char c to stdout
 *@c: the char to print.
 *
 *Return: on success 1
 *On error: -1 is returned, and errno is appropriately set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
