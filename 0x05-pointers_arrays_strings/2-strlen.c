#include "main.h"

/**
 * _strlen - it returns length of string iputed
 * @s: string to be calculated its length
 * @p: pointer to the string s
 * @i: length of string
 * Return: integer
 */

int _strlen(char *s)
{
	char *p = s;
	int i = 0;

	while (*p != '\0')
	{
		i++;
		p++;
	}

	return (i);
}
