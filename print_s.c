#include "main.h"

/**
 * print_s - print a string or char argument
 * @args: va_list containing the string or char to print as the next element
 *
 * Return: the number of bytes printed
 */

int print_s(va_list args)
{
	int j;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
	return (j);
}
