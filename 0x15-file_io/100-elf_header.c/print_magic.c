#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_magic - Prints the magic numbers of an elf header.
 * @me_ident: A pointer to an array containing the elf magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(unsigned char *me_ident)
{
	int a;

	printf("  Magic:   ");

	for (a = 0; a < EI_NIDENT; a++)
	{
		printf("%02x", me_ident[a]);

		if (a == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
