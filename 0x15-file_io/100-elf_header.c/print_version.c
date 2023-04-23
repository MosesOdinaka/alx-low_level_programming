#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_version - Prints the version of an elf header.
 * @me_ident: A pointer to an array containing the elf version.
 */
void print_version(unsigned char *me_ident)
{
	printf("  Version:                           %d",
	       me_ident[EI_VERSION]);

	switch (me_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}
