#include "main.h"
#include <ctype.h>
/**
 * _islower - Check if a character is in lowercase
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if(islower (c) )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
