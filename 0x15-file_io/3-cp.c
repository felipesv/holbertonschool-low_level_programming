#include "holberton.h"
/**
 * print_error - all the error
 * @error: error
 * @name: name
 *
 * Return: Always 0.
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
 * main - check the code for Holberton School students.
 * @argc: counter
 * @argv: arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *file1, *file2, buffer[1024];
	int file1Open, file2Open, file1Close, file2Close, file1Read;

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
	while (1)
	{
		write(file2Open, buffer, file1Read);
		file1Read = read(file1Open, buffer, 1024);
		if (file1Read <= 0)
			break;
	}
	file1Close = close(file1Open);
	if (file1Close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1Close);
		exit(100);
	}
	file2Close = close(file2Open);
	if (file2Close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1Close);
		exit(100);
	}

	return (0);
}
