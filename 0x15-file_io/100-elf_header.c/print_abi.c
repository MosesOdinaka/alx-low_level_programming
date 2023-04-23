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
