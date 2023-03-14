#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatanate all the argument of your program.
 * @ac: argument count in main.
 * @av: argument passed to main.
 *
 * Return: Pointer
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int a, lt, i, j, k;

	if (ac == 0 || av == NULL)
		return (0);
	a = 0, k = 0;
	for (i = 0; i < ac; i++)
	{
		lt = 0;
		while (av[i][lt])
			lt++;
		a += lt + 1;
	}
	s = malloc((a + 1) * sizeof(char));

	if (s == 0)
		return (0);

	for (j = 0; j < ac; j++)
	{
		lt = 0;
		while (av[j][lt])
		{
			*(s + k) = av[j][lt];
			k++;
			lt++;
		}
		*(s + k) = '\n';
		k++;
	}
	*(s + k) = '\0';

	return (s);
}
