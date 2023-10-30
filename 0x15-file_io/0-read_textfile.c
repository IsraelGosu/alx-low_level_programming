#include "main.h"

/**
 * read_textfile - A function that reads a text
 * file and prints the letters
 * @filename: the name of the file.
 * @letters: the numbers of letters printed.
 * Return: the numbers of letters printed
 * and returns 0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int gf;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	gf = open(filename, O_RDONLY);

	if (gf == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(gf, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(gf);

	free(buf);

	return (nwr);
}
