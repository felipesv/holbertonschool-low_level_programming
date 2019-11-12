#include "holberton.h"
/**
 * create_file -  creates a file.
 * @filename: file name
 * @text_content: content
 *
 * Return: succes 0, error -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, cnt;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (cnt = 0; *(text_content + cnt) != '\0'; cnt++)
		;

	write(fd, text_content, cnt);
	close(fd);

	return (1);
}
