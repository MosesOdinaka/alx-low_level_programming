#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: name of the file.
 * @letters: numbers of letters read and print.
 *
 * Return: numbers of letters printed. If it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int doc;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
	return (0);

	doc = open(filename, O_RDONLY);

	if (doc == -1)
	return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
	return (0);

	rd = read(doc, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(doc);

	free(buf);

	return (wr);
}
