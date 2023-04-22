#include "main.h"

/**
  * string_nconcat - string concat
  * @s1: string 1
  * @s2: string 2
  * @n: index
  * Return: char ptr
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, k = 0, m = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (n >= k)
		m = i + k;
	else
		m = i + n;
	s = malloc(sizeof(char) * m + 1);
	if (s == NULL)
		return (NULL);
	k = 0;
	while (j < m)
	{
		if (j <= i)
			s[j] = s1[j];
		if (j >= i)
		{
			s[j] = s2[k];
			k++;
		}
		j++;
	}
	s[j] = '\0';
	return (s);
}
