#include "main.h"

/**
 * print_c - prints char
 * @args: arguement char
 * Return: pointer args
 */

char *print_c(va_list args)
{
	static char s[2] = {'0', '\0'};

	s[0] = va_arg(args, int);

	return (s);
}

/**
 * print_s - prints string
 * @args: list to print
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
 * _strncat - concatenates two strings
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[n + i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _position - return position on string
 * @s: string
 * @n: int
 * Return: postion on string
 */

int _position(const char *s, int n)
{
	int i;

	i = 0;

	while (*s)
	{
		if (s[n + 1] != ' ')
		{
			return (i);
		}
		n++;
		i++;
	}
	return (0);
}
