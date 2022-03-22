#include "holberton.h"

/**
 * rev_string - main function.
 * @s: Pointer, the string to print.
 *
 * Description: This function reverses a string.
 *
 * Return: none.
 */

void puts2(char *str)
{
	int i;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
