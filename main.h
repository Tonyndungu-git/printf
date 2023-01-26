#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>



int _printf(const char *format, ...);
char *_strcat(char *dest, char *src, int n);


/**
 * struct type - Struct data type
 *
 * @op: data type argument
 * @f: The function associated
 */

typedef struct type
{
	char *op;
	char *(*f)(va_list);


} type_t;
char *print_c(va_list args);
char *print_s(va_list args);
#endif
