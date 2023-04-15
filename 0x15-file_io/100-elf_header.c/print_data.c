#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_data - Prints the data of an elf header.
 * @me_ident: A pointer to an array containing the elf class.
 */
void print_data(unsigned char *me_ident)
{
	printf("  Data:                              ");

	switch (me_ident[EI_DATA])
	{
	case elfDATANONE:
		printf("none\n");
		break;
	case elfDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case elfDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", me_ident[EI_CLASS]);
	}
}
