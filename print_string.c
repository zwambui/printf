#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_string - prints a string
 * @ap: argument
 *
 * Return: length of string
 */

char *print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
		s = "(null)";
	return (s);
}
