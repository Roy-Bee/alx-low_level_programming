#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 *
 * @str: input
 *
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char *s = str;
	int r;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	j = i - 1;
	for (r = 0; r <= j; r++)
	{
		if (r % 2 == 0)
		{
			_putchar(str[r]);
		}
	}
	_putchar('\n');
}
