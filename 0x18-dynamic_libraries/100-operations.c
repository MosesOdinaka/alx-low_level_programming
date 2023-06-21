#include "main.h"

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the division of a by b
 */
int div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}

/**
 * mod - computes the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of the division of a by b
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}
