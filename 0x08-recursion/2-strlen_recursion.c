#include <stdio.h>
#include "main.h"

/**
  * _strlen_recursion - output string length using recursion
  * @s: string to find length
  * Return: nothing
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
