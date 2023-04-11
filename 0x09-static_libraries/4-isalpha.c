#include "main.h"
/**
  * _isalpha - check if value is aplbahetic
  * @c: the char to be checked
  * Return: 1 if true else 0
  */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
