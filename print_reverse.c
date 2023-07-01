#include "main.h"

/**
 * print_reverse - print a string in reverse
 * @args: va_list containing string to print
 * Return: length of returned string
 */
int print_reverse(va_list args)
{
	char *s = va_arg(args, char *);
	int len, j;

	len = 0;
	while (s[len])
		len++;

	j = len - 1;

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	return (len);
}
