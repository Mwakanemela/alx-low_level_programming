#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * _islower - check if letter is lowercase
  * @c: character to check
  * Return: is lower or not
  */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
