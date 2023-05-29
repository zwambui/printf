#ifndef MAIN_H
#define MAIN_H

typedef struct
{
	char op;
	int (*function)(va_list);
} spec_struct;

int _printf(const char *format, ...);
int _putchar(char);
int _char(va_list a);
int _str(va_list a);
int _percent(__attribute__((unused)) va_list a);
int main(void);

#endif
