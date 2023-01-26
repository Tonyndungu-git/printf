#include <stdio.h>

/**
 * _putchar - prints a char
 * print_num - prints a number
 * @n: the number
 */

int _putchar(char c);
int _numlen(int n);

int print_num(int n)
{

	unsigned int len;
	len = _numlen(n);
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_num(num / 10);

	_putchar((num % 10) + '0');
	return (len);
}
