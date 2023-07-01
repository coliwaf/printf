#include "main.h"

/**
 * print_unsigned - prints unsigned integers
 * @args: number parameter to print
 * Return: length of output
 */
int print_unsigned(va_list args)
{
	unsigned int dec = va_arg(args, unsigned int);
	int len = 1;
	unsigned int i;

	int res;

	if (dec < 1)
	{
		_putchar('0');
		return (1);

	}

	i = dec;
	res = print_number(i);

	if (res == 1)
		len += count_length(i);
	else
		len = -1;

	return (len);
}
