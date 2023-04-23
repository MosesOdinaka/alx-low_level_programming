#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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
