#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to check
 * @c the character we're looking for
 *
 * Return: a pointer to the first occurance of character @c in the string @s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
