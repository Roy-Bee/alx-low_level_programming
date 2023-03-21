#include "main.h"

/**
 * islower - Shows 1 if the input is c lowercase, otherwise show 0
 *@c: the character in ASCII code
 * Return: 1 for lowercase, 0 for the any other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
