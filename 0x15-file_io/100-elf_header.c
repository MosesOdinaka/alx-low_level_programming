#include <elf.h>

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
 * print_abi - Prints the ABI version of an elf header.
 * @me_ident: A pointer to an array containing the elf ABI version.
 */
void print_abi(unsigned char *me_ident)
{
	printf("  ABI Version:                       %d\n",
	       me_ident[EI_ABIVERSION]);
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
