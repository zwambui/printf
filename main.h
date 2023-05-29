#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - A new struct type defining a printer.
 * @f: represents a data type.
 * @func: A function pointer
 */

typedef struct print
{
	char f;
	char *(*func)(va_list);
} t_print;

int _printf(const char *format, ...);
int _putchar(char c);

char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strrev(char *str);
char *_itoa(int num, char *str, int base);

char *print_char(va_list ap);
char *print_string(va_list ap);
char *print_unsigned_int(va_list ap);
char *print_int(va_list ap);
char *print_pointer(va_list ap);
char *print_percent(va_list ap);

int my_print(const char *fmt, va_list ap, char *buffer, char *specifier_buff);

char *get_specifier_buff(char c, va_list ap);

#endif
