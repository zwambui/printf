#include <stdio.h>
#include "main.h"

/**
 * _char - prints a character
 * @a: the source of character
 *
 * Return: no. of  characters printed
 */

int _char(va_list a)
{
	int length = 0;
	char c = va_arg(a, int);

	_putchar(c);
	length++;

	return (length);
}


/**
 * _str - prints a string
 * @a: source of string
 *
 * Return: length of string
 */

int _str(va_list a)
{
	char *s = va_arg(a, char *);
	int length = 0;

	if (s == NULL)
	{
		length += _printf("(null)");
	}
	else
	{
		while (*s != '\0')
		{
			_putchar(*s);
			s++;
			length++;
		}
	}
	return (length);

}

/**
 * _percent - prints a percentage
 * @a: source of percent
 *
 * Return: 0
 */
int _percent(__attribute__((unused)) va_list a)
{
	int length = 0;

	_putchar('%');
	length++;
	return (length);
}
