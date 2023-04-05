#include "main.h"
#include <stdio.h>
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: value to recursion
  * @Return: result
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	int start = 1;
	int end = n;
	int mid = (start + end) / 2;
	int result;

	if (mid * mid == n)
		result = mid;
	else if (mid * mid < n)
		result = _sqrt_recursion(mid + 1);
	else
		result = _sqrt_recursion(mid - 1);
	return (result);
}
