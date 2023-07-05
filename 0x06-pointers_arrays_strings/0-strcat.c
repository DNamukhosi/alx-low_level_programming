#include <stdio.h>
#include "main.h"

/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int i;
	int jul = 0;
	      
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

