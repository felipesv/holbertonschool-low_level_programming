#include "holberton.h"
/**
 * read_textfile - convert to binary and print
 * @filename: number to convert
 * @letters: length
 *
 * Return: counter chars
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, rd, wr;
	char *buf = malloc(sizeof(char) * (letters));

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	rd = read(fd, buf, letters);

	if (rd < 0)
		return (0);

	wr = write(STDOUT_FILENO, buf, letters);

	if (wr < 0)
		return (0);

	free(buf);
	return (rd);
}
