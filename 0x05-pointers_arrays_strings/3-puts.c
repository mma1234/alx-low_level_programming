#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
