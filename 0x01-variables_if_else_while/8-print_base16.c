#include <stdio.h>
/**
 * main - The entry point.
 * Return: 0 Always.
 */
int main(void)
{
	int i;
	char c;

	i = 0;
	c = 'a';
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
