/**
 * File: 100-elf_header.c
 * Author: Iriele Odinaka Moses
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *me_ident);
void print_magic(unsigned char *me_ident);
void print_class(unsigned char *me_ident);
void print_data(unsigned char *me_ident);
void print_version(unsigned char *me_ident);
void print_abi(unsigned char *me_ident);
void print_osabi(unsigned char *me_ident);
void print_type(unsigned int me_type, unsigned char *me_ident);
void print_entry(unsigned long int me_entry, unsigned char *me_ident);
void close_elf(int elf);

/**
 * check_elf - Checks if a file is an elf file.
 * @me_ident: A pointer to an array containing the elf magic numbers.
 *
 * Description: If the file is not an elf file - exit code 98.
 */
void check_elf(unsigned char *me_ident)
{
	int p;

	for (p = 0; p < 4; p++)
	{
		if (me_ident[p] != 127 &&
		    me_ident[p] != 'E' &&
		    me_ident[p] != 'L' &&
		    me_ident[p] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an elf file\n");
			exit(98);
		}
	}
}

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

/**
 * print_osabi - Prints the OS/ABI of an elf header.
 * @me_ident: A pointer to an array containing the elf version.
 */
void print_osabi(unsigned char *me_ident)
{
	printf("  OS/ABI:                            ");

	switch (me_ident[EI_OSABI])
	{
	case elfOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case elfOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case elfOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case elfOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case elfOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case elfOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case elfOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case elfOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case elfOSABI_ARM:
		printf("ARM\n");
		break;
	case elfOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", me_ident[EI_OSABI]);
	}
}

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

/**
 * print_entry - Prints the entry point of an elf header.
 * @me_entry: The address of the elf entry point.
 * @me_ident: A pointer to an array containing the elf class.
 */
void print_entry(unsigned long int me_entry, unsigned char *me_ident)
{
	printf("  Entry point address:               ");

	if (me_ident[EI_DATA] == elfDATA2MSB)
	{
		me_entry = ((me_entry << 8) & 0xFF00FF00) |
			  ((me_entry >> 8) & 0xFF00FF);
		me_entry = (me_entry << 16) | (me_entry >> 16);
	}

	if (me_ident[EI_CLASS] == elfCLASS32)
		printf("%#x\n", (unsigned int)me_entry);

	else
		printf("%#lx\n", me_entry);
}

/**
 * close_elf - Closes an elf file.
 * @elf: The file descriptor of the elf file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        elf header at the start of an elf file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an elf File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	elf64_Ehdr *header;
	int a, c;

	a = open(argv[1], O_RDONLY);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(a);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	c = read(a, header, sizeof(elf64_Ehdr));
	if (c == -1)
	{
		free(header);
		close_elf(a);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->me_ident);
	printf("elf Header:\n");
	print_magic(header->me_ident);
	print_class(header->me_ident);
	print_data(header->me_ident);
	print_version(header->me_ident);
	print_osabi(header->me_ident);
	print_abi(header->me_ident);
	print_type(header->me_type, header->me_ident);
	print_entry(header->me_entry, header->me_ident);

	free(header);
	close_elf(a);
	return (0);
}
<<<<<<< HEAD

=======
>>>>>>> 9bc7722eceeef223ceaa93ee0f506bcb154b2bb3
