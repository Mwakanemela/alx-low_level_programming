#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _strlen - find string length
  * @str: string
  * Return: length of string
  */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
  * strcpy - string copy
  * @dest: destination
  * @src: source
  * Return: destination
  */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
  * new_dog - creates a new dog
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * Return: new dog struct
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	ndog->name = _strcpy(ndog->name, name);
	ndog->age = age;
	ndog->owner = _strcpy(ndog->owner, owner);
	return (ndog);
}
