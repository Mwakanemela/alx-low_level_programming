#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
  * _sqrt_recursion - return the natural sqrt
  * @n: number to calc the natural sqrt
  * @Return: the natural sqrt
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - calc natural sqrt
  * @n: number to calc sqrt
  * @i: iterate number
  * Return: the natural sqrt
  */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
