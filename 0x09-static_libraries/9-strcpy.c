#include "main.h"
/**
  * _strcpy - copy string
  * @dest: copy to
  * @src: copy from
  *  Return: copied value
  */
char *_strcpy(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (*(src + d) != '\0')
		d++;
	for (; s < d; s++)
		dest[s] = src[s];
	dest[d] = '\0';
	return (dest);
}
