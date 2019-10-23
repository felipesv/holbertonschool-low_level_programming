/**
 * print_name - print a name
 * @name: name to print
 * @f: function
 *
 * Return: 0 success
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
