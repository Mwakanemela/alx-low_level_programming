#include "main.h"

/**
  * _isupper - uppercase letters
  * @c: char to check ifis in upper case
  * Return: 1 for true 0 for false
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
