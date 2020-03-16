#include <unistd.h>

/**
 * _putchar - Print character.
 * @c: Character.
 * Return: 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
