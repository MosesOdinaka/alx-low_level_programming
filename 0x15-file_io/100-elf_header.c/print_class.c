#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_class - Prints the class of an elf header.
 * @me_ident: A pointer to an array containing the elf class.
 */
void print_class(unsigned char *me_ident)
{
	printf("  Class:                             ");

	switch (me_ident[EI_CLASS])
	{
	case elfCLASSNONE:
		printf("none\n");
		break;
	case elfCLASS32:
		printf("elf32\n");
		break;
	case elfCLASS64:
		printf("elf64\n");
		break;
	default:
		printf("<unknown: %x>\n", me_ident[EI_CLASS]);
	}
}
