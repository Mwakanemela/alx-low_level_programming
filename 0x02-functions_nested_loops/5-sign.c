#include "main.h"

/**
  * print_sign - prints sign based on condition
  * @n: the number of the sign to be printed
  * Return: 1 if > 0
  * 0 if n == 0
  * -1 if n < 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
