#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 Always
 */
int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if ((a != 'q' && a != 'e') && a <= 'z')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
