#include "main.h"
/**
  * _puts - print string with a new line
  * @str: string input and output
  * Return: string with new line
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
