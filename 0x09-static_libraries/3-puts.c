#include "main.h"
/**
  * _puts - print string with a new line
  * @str: string input and output
  * Return: string with new line
  */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}

	_putchar('\n');
}
