#include "main.h"

/**
 * print_last_digit - Last digit of a number.
 * @n: Number to be treated.
 * Return: value of last digit number.
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	_putchar('\n');
	return (last);
}
