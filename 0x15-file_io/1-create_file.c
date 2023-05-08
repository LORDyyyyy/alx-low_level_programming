#include "main.h"

/**
 * create_file -  creates a file.
 * @filename: filename
 * @text_content: text_content is a NULL terminated string to write to the file
 *
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int f, w, text_len = 0;

	text_content = text_content ? text_content : "";
	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	while (text_content[text_len])
		text_len++;

	w = write(f, text_content, text_len);
	if (w == -1)
		return (-1);

	close(f);
	return (1);
}
