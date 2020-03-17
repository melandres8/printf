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

/**
 * func_di - prints a decimal and integer
 * @di: decimal to print
 *
 * Return: number of chars and digits printed
 */
int func_di(va_list di)
{
	int a[10];
	int n, j, add, m, counter;

	n = va_arg(di, int);
	counter = 0;
	m = 1000000000;

	a[0] = n / m;

	j = 1;
	while (j < 10)
	{
		m = m / 10;
		a[j] = (n / m) % 10;
		j++;
	}
	/*Negative numbers*/
	j = 0;
	if (n < 0)
	{
		_putchar('-');
		counter++;
		while (j < 10)
		{
			a[j] *= -1;
			j++;
		}
	}
	j = 0, add = 0;
	while (j < 10)
	{
		add += a[j];
		if (add != 0 || j == 9)
		{
			_putchar(a[j] + '0');
			counter++;
		}
	j++;
	}
	return (counter);
}
/**
 * func_rev - Print a string in reverse.
 * @r: String argument
 * Return: Number of characters
 */
int func_rev(va_list r)
{
	int i, counter = 0;
	char *rev;

	rev = va_arg(r, char *);
	if (rev != NULL)
	{
		for (i = 0; rev[i]; i++)
		{}

		for (i = i - 1; i >= 0; i--)
		{
			_putchar(rev[i]);
			counter++;
		}
	}
	else
	{
		rev = "(nil)";
	}
	return (counter);
}
