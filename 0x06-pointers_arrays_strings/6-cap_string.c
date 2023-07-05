#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalize all word of a string
 * @s: string array
 * Return: string array
 */

char *cap_string(char *s)
{
	int i;
	int cap;

	for (i = 0; s[i] != '\0'; i++)
	{
		cap = i - 1;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] = s[i] - 32;
			else if (s[cap] >= 9 && s[cap] <= 10)
				s[i] = s[i] - 32;
			else if (s[cap] >= 32 && s[cap] <= 34)
				s[i] = s[i] - 32;
			else if (s[cap] >= 40 && s[cap] <= 41)
				s[i] = s[i] - 32;
			else if (s[cap] == 46)
				s[i] = s[i] - 32;
			else if (s[cap] == 59)
				s[i] = s[i] - 32;
			else if (s[cap] == 123 || s[cap] == 125)
				s[i] = s[i] - 32;
		}
	}

	return (s);
}
