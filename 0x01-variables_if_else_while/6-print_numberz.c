#include <stdio.h>
/**
 * main - The entry point.
 * Return: 0 Always
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
