#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_abi - Prints the ABI version of an elf header.
 * @me_ident: A pointer to an array containing the elf ABI version.
 */
void print_abi(unsigned char *me_ident)
{
	printf("  ABI Version:                       %d\n",
	       me_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an elf header.
 * @me_type: The elf type.
 * @me_ident: A pointer to an array containing the elf class.
 */
void print_type(unsigned int me_type, unsigned char *me_ident)
{
	if (me_ident[EI_DATA] == elfDATA2MSB)
		me_type >>= 8;

	printf("  Type:                              ");

	switch (me_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", me_type);
	}
}
