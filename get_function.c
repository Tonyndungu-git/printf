#include "main.h"

/**
 * get_function - determine which print function to use
 * @specifier: the character that identifies the type of the variable to print
 *
 * Return: pointer to the matching print function
 */

int (*get_function(const char *specifier))(va_list)
{
	int i;

	type_t types[] = {
		{"s", print_s},
		{"c", print_c},
		{"d", print_d},
		{"i", print_d},
		{"b", print_b},
		{"o", print_o},
		{"u", print_u},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"R", rot13},
		{"r", print_rev},
		{NULL, NULL}
	};

	for (i = 0; types[i].identifier; i++)
	{
		if (*specifier == types[i].identifier[0])
			return (types[i].print);
	}

	return (NULL);
}
