#include "holberton.h"
/**
 * print_error - all the error with msj char*
 * @error: error
 * @name: name
 *
 * Return: is a void
 */
void print_error(int error, char *name)
{

	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		break;
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
		break;
	}
	exit(error);
}
/**
 * print_error_close - error close
 * @msj: error value
 *
 * Return: is a void
 */
void print_error_close(int msj)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", msj);
	exit(100);
}
/**
 * main - check the code for Holberton School students.
 * @argc: counter
 * @argv: arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *file1, *file2, buffer[1024];
	int file1Open, file2Open, file1Close, file2Close, file1Read, file2Write;

	if (argc != 3)
		print_error(97, NULL);

	file1 = argv[1];
	file1Open = open(file1, O_RDONLY);

	if (file1Open == -1)
		print_error(98, file1);

	file2 = argv[2];
	file2Open = open(file2, O_CREAT | O_RDWR | O_TRUNC, 0664);

	if (file2Open == -1)
		print_error(99, file2);

	file1Read = read(file1Open, buffer, 1024);
	while (file1Read > 0)
	{
		file2Write = write(file2Open, buffer, file1Read);
		if (file2Write < 0)
			print_error(99, file2);
		file1Read = read(file1Open, buffer, 1024);
		if (file1Read < 0)
			print_error(98, file1);
		if (file1Read != file2Write)
			print_error(99, file2);
	}

	if (file1Read < 0)
		print_error(98, file1);
	file1Close = close(file1Open);
	if (file1Close < 0)
		print_error_close(file1Close);
	file2Close = close(file2Open);
	if (file2Close < 0)
		print_error_close(file2Close);
	return (0);
}
