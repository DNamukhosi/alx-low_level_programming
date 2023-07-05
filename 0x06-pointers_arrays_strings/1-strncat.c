#include <stdio.h>
#include "main.h"

/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int jul = 0, i;

	while (dest[jul])
	{
		jul++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[jul] = src[i];
		jul++;
	}

	dest[jul] = '\0';
	return (dest);
}
