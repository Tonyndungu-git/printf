#include <stdio.h>

/**
 * loopstr - loop through a string
 *
 * _putchar - prints a character
 * @c: the char
 * Return: no of strings
 */

int _putchar(char c);

int loopstr(char str[])
{
	unsigned int j, count;

	j = 0;
	count = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
		count++;
	}
		return (count);
}
