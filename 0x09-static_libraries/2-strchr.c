#include "main.h"
#include <stddef.h>
/**
  * _strchr - entry point
  * @s: input value
  * @c: inut value
  * Return: 0
  */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
