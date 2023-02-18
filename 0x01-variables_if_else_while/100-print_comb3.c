#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The entry point.
 * Return: 0 Always (true).
 */
int main(void)
{
	int i, n;

	for (i = '0'; i < '9'; i++)
	{
	for (n = i + 1; n <= '9'; n++)
	{
	if (n != i)
	{
	putchar(i);
	putchar(n);
	if (i == '8' && n == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
