#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fl;
	int nltr;
	int rwr;

	if (!filename)
	return (-1);

	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fl == -1)
	return (-1);

	if (!text_content)
	text_content = "";

	for (nltr = 0; text_content[nltr]; nltr++)
	;

	rwr = write(fl, text_content, nltr);

	if (rwr == -1)
	return (-1);

	close(fl);

	return (1);
}
