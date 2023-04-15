#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
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
