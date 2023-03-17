#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar(reverse);
	}
	putchar('\n');
	return (0);
}
