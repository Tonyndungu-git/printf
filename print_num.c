#include <stdio.h>

/**
 * _putchar - prints a char
 * print_num - prints a number
 * @n: the number
 */

int _numlen(int n);

int print_num(int n)
{

	unsigned int len;
	len = _numlen(n);
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_num(num / 10);

	putchar((num % 10) + '0');
	return (len);
}
