#include "main.h"

/**
 * err_from_to - prints the error of f_from & f_to file
 * @check_from: returned value from the file, if -1 then exit
 * @check_to: ......
 * @check_close: checks if there is an error happened when closing a file
 * @av: argument list contains the file names
 *
 * Return: void
 */
void err_from_to(int check_from, int check_to, int check_close, char **av)
{
	if (check_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
		exit(98);
	}

	if (check_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	if (check_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", check_close);
		exit(100);
	}
}
/**
 * main - entry point
 * @av: arguments list
 * @ac: av size
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int f_from, f_to, r = BUF, w;
	char buffer[BUF];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	f_from = open(av[1], O_RDONLY);
	f_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);

	while (r == BUF)
	{
		r = read(f_from, buffer, BUF);
		err_from_to(r, 0, 0, av);

		w = write(f_to, buffer, r);
		err_from_to(0, w, 0, av);
	}

	close(f_from);
	err_from_to(0, 0, f_from, av);

	close(f_to);
	err_from_to(0, 0, f_to, av);
	return (0);
}
