#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: text to add to the end of the file
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fil = open(filename, O_WRONLY | O_APPEND), lent = 0;
	ssize_t wrt_o = 0;

	if (fil > -1 && filename)
	{
		while (text_content && text_content[lent])
			lent++;
		if (lent > 0)
			wrt_o = write(fil, text_content, lent);
		close(fil);
		if (wrt_o > -1)
			return (1);
	}
	return (-1);
}
