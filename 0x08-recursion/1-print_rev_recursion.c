#include "main.h"
#include <stdio.h>
/**
  * _print_rev_recursion -  function that prints a string in reverse.
  * @s: a string input to reverse
  * Return: nothing
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
