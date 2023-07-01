#include "main.h"

/**
 * print_string -  prints string input
 * @args: the string to print
 * Return: length of returned string
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
