#include "main.h"


/**
 * print_S - prints a string & allows to display values that aren't ASCII
 * @S: string to print
 * Description: if out ASCII range print as \\x
 * Return: number of chars printed
 */
int print_S(va_list args)
{
	unsigned int i;
	int j = 0, k;
	char c = 'A' - ':';
	char d[2];
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		if (s[i] < 32 || s[i] > 126)
		{
			_putchar('\\');
			_putchar('x');
			j += 2;
			d[0] = s[i] / 16;
			d[1] = s[i] % 16;
			for (k = 0; k < 2; k++)
			{
				if (d[k] >= 10)
					_putchar('0' + c + d[k]);
				else
					_putchar('0' + d[k]);
			}
			j += k;
		}
		else
		{
			_putchar(s[i]);
			j++;
		}
	}
	return (j);

}
