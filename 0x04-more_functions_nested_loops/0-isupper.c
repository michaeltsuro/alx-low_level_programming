#include "main.h"

/**
 * _isupper - print 1 if its uppercase 0 otherwise
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c>64 && c<91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
