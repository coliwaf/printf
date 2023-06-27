#include "main.h"

/**
 * print_string -  prints string input
 * @str: the string to print
 */
int print_string(va_list args)
{
	int len;
	char *str = va_arg(args, char*);

	if (str == NULL)
		str = "(null)";

	for (len = 0; *str != '\0'; len++)
	{
		_putchar(*str);
		str++;
	}
	return (len);
}
