#include <stdio.h>

int _puts(char *p)
{
	int i = 0;

	for (i = 0; *(p + i) != '\0'; i++ )
	{
		putchar(*(p + i));
	}
	return (i);
}
