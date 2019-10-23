#include "3-calc.h"
/**
 * main - print result of basic operations
 * @argc: number of command line arguments
 * @argv: array containing the line arguments
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!(argv[2][0] == '+' || argv[2][0] == '-' ||
	      argv[2][0] == '/' || argv[2][0] == '*' ||
	      argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	result = (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}
