#include <stdio.h>
#include "main.h"

/**
 * get_specifier_buff - gets the specifier buffer
 * @c: format-specifier
 * @ap: argument
 *
 * Return: string or 0
 */

char *get_specifier_buff(char c, va_list ap)
{
	int i;
	t_print t[] = {
	    {'c', print_char},
	    {'s', print_string},
	    {'u', print_unsigned_int},
	    {'d', print_int},
	    {'i', print_int},
	    {'\0', NULL}
	};
	for (i = 0; t[i].f; i++)
	{
		if (t[i].f == c)
			return (t[i].func(ap));
	}
	return ("");
}
