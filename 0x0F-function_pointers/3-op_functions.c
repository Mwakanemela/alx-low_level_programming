#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * op_add - add
  * @a: num1
  * @b: num2
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtract
  * @a: num1
  * @b: num2
  * Return: subtraction
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiply
  * @a: num1
  * @b: num2
  * Return: multiplication
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide
  * @a: num1
  * @b: num2
  * Return: division value
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - modulus
  * @a: num1
  * @b: num2
  * Return: modulus
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
