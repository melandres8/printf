#include "holberton.h"

/**
 * func_char - Print a char type.
 * @str: Char type.
 * Return: Number of chacacters.
 */
int func_char(va_list str)
{
	char c;

	c = va_arg(str, int);

	_putchar(c);

	return (1);
}

/**
 * func_string - Validate a string.
 * @str: String container.
 * Return: Lenght of a string.
 */
int func_string(va_list str)
{
	char *string;
	unsigned int i;

	string = (char *)va_arg(str, int *);
	if (string == NULL)
	{
		string = "(nil)";
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}

	return (i);
}
