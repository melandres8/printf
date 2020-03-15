#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);
int _printf(const char *format, ...);

typedef struct form
{
	char *formt;
	int (*func)();
}forms;
#endif
