#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: filename
 * @text_content: the text to append
 *
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, len = 0, apnd;

	text_content = text_content ? text_content : "";

	if (!filename)
		return (-1);

	while (text_content[len])
		len++;

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	apnd = write(f, text_content, len);

	if (apnd == -1)
		return (-1);

	close(f);
	return (1);
}
