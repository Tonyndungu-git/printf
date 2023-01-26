#include "main.h"
#include <string.h>
/**
 * _printf - custom function that format and print data
 * @format:  list of types of arguments passed to the function
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, j;
	int len_buf = 0;
	char *s;
	char *create_buff;

	type_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	create_buff = malloc(1024 * sizeof(char));
	if (create_buff == NULL)
	{
		free(create_buff);
		return (-1);
	}
	va_start(args, format);
	if (format == NULL || args == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
			continue;
		else if (format[i] == '%')
		{
			if (format[i + 1] == ' ')
				i += _position(format, i);
			for (j = 0; ops[j].f != NULL; j++)
			{
				if (format[i + 1] == *(ops[j].op))
				{
					s = ops[j].f(args);
					if (s == NULL)
						return (-1);
					strncat(create_buff, s, len_buf);
					len_buf += strlen(s);
					i++;
					break;
				}
			}
			if (ops[j].f == NULL)
			{
				create_buff[len_buf] = format[i];
				len_buf++;
			}
		}
		else
		{
			create_buff[len_buf] = format[i];
			len_buf++;
		}
	}
	create_buff[len_buf] = '\0';
	write(1, create_buff, len_buf);
	va_end(args);
	free(create_buff);
	return (len_buf);
}
