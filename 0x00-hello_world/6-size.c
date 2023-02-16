#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled and run on.
 *Return: 0
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int e;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(z));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(e));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
