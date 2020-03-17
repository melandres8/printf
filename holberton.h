#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct form - Global structure
 * @formts: Struct.
 * @func: Funcion to a pointer.
 */
typedef struct form
{
	char *formts;
	int (*func)(va_list);
} forms;

int _putchar(char c);
int _printf(const char *format, ...);
int func_char(va_list chr);
int func_string(va_list str);
int func_di(va_list di)
#endif
