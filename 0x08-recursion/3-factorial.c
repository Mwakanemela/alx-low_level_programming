#include "main.h"
#include <stdio.h>

/**
  * factorial - return the factorial of a given number
  * @n: the number to factorial
  * Return: answer
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
