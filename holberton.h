#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct form
{
	char *formt;
	int (*func)();
} forms;

int _putchar(char c);
int _printf(const char *format, ...);
int func_char(va_list chr);
int func_string(va_list str);

#endif
