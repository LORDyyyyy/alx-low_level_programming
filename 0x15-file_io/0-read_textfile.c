#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename passed through av list
 * @letters: number of letters to be read/write
 *
 * Return: letters len
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t r, w;
	char *text;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	text = malloc(sizeof(char) * letters);
	if (!text)
		return (0);

	r = read(f, text, letters);
	w = write(STDOUT_FILENO, text, r);

	free(text);
	close(f);

	return (w);
}
