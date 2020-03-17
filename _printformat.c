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
		{"i", func_di},
		{"d", func_di},
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

/**
 * _printf - Our own print format.
 * @format: Differents formats.
 * Return: Number of characters.
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, counter = 0;
	va_list list;
	int (*func)(va_list);

	if (format == NULL)
	{
		return (-1);
	}

	va_start(list, format);

	while (format[i] != '\0')
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			counter++;
			i++;
		}
		if (!format[i])
		{
			return (counter);
		}

		func = validate_format(&format[i + 1]);

		if (func != NULL)
		{
			counter = counter + func(list);
			i = i + 2;
			continue;
		}
		if (!format[i + 1])
		{
			return (-1);
		}

		_putchar(format[i]);
		counter++;

		if (format[i + 1] != '%')
		{
			i++;
		}
		else
		{
			i = i + 2;
		}
		i++;
	}
	va_end(list);
	return (counter);
}
