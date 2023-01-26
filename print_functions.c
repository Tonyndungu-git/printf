#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_c - prints char
 * @list: arguement char
 * Return: pointer args
 */

char *print_c(va_list args)
{
	static char s[2] = {0, '\0'};

	s[0] = va_arg(args, int);
	if (s[0] == '\0')
		return (" ");
	return (s);
}

/**
 * print_s - prints string
 * @list: list to print
 * Return: pointer args
 */

char *print_s(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		return (s = "(null)");
	return (s);
}


/**
 * print_bin - print binary
 * @list: va_list
 * Return: pointer to string of binary
 */

char *print_bin(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char s[1024];
	char *b;
	int i;

	b = s;
	i = 0;

	if (n == 0)
	{
		s[++i] = '0';
	}

	while (n != 0)
	{
		s[i] = (n % 2) + '0';
		i++;
		n /= 2;
	}

	rev_string(s);
	s[i] = '\0';

	return (b);
}
