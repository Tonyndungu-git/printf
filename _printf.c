#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int loopstr(const char *str);
void print_num(int n);
int _puts(char *p);

int _printf(const char *format, ...)
{
	int i, numOfChar;
	va_list args;

	numOfChar = 0;
	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{

<<<<<<< HEAD
			case 'c':
				_putchar(va_arg(args, int));
				numOfChar++;
				break;
			case 's':
				numOfChar = _puts(va_arg(args, char *));
				break;
			case '%':
				_putchar(format[i]);
				numOfChar++;
				break;
			default :
				_putchar(format[i]);
=======
				case 'c':
					_putchar(va_arg(args, int));
					numOfChar++;
					break;
				case 's':
					numOfChar = _puts(va_arg(args, char *));
					break;
				
				case '%':
					_putchar(format[i]);
					numOfChar++;
					break;
				default :
					_putchar(format[i]);
			}
		}else
		{
			_putchar(format[i]);
>>>>>>> 3dc08cce075b57f4becb699b5cad26a758f92845
		}
	}
	va_end(args);
	return(numOfChar);
}
