#include <stdio.h>

/**
 * main - The entry point.
 *
 *Return: Always 0.
 */

int main(void)
{
	fprintf(stdout, "Size of a char: %zu byte(s)\n", sizeof(char));
	fprintf(stdout, "Size of an int: %zu byte(s)\n", sizeof(int));
	fprintf(stdout, "Size of a long int: %zu byte(s)\n", sizeof(long int));
	fprintf(stdout, "Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	fprintf(stdout, "Size of a float %zu byte(s)\n", sizeof(float));
	fprintf(stdout, "\n");
	fprintf(stderr, "[Anything]\n");
	return (0);
}
