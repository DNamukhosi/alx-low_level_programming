#include <stdio.h>
#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int jul = 0;
	
	while (dest[jul])
	{
		jul++;
	}

	while (i < n && src[i])
	{
		dest[jul] = src[i];
		jul++;
		i++;
	}

	dest[jul + n + 1] = '\0';

	return (dest);
}
