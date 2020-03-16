#include "holberton.h"

/**
 * validate_format - Validate the specific formats.
 * @format: format
 * Return: The formats.
 */
static int (*validate_format(const char *format))(va_list)
{
	unsigned int i;
	forms formt[] = {
		{"c", func_char},
		{"s", func_string},
		{NULL, NULL}
	};

	for (i = 0; formt[i].formts != NULL; i++)
	{
		if (*(formt[i].formts) == *format)
		{
			break;
		}
	}
	return (formt[i].func);
}