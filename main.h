#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>



int _printf(const char *format, ...);
char *_strcat(char *dest, char *src, int n);
char *print_bin(va_list list);
int _strlen(char *s);
int _abs(int n);
int _numlen(int n);
void *rev_string(char *s);
char *print_i(va_list list);



/*
int _putchar(char c);
int loopstr(const char *str);
void print_num(int n);
int _puts(char *p);
*/

typedef struct type
{
	char *op;
	char *(*f)(va_list); 


} type_t;
char *print_c(va_list args);
char *print_s(va_list args);


#endif
