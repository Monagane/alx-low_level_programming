#include "main.h"

/**
 * _islower - checks lowercase
 * Return: 1 if c is lowercase
 * @c: c is a character
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
